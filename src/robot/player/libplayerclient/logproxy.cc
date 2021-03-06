/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2005-
 *     Brian Gerkey
 *                      
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2005-
 *     Brian Gerkey
 *                      
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * $Id$
 *
 * client-side log device
 */

#include <playerclient.h>
#include <netinet/in.h>
#include <cstring>
#include <cstdio>

void 
LogProxy::FillData(player_msghdr_t hdr, const char* buffer)
{
  // empty
}

// interface that all proxies SHOULD provide
void 
LogProxy::Print()
{
  printf("#Log(%d:%d) - %c\n",
         m_device_id.code, m_device_id.index, access);
}

int 
LogProxy::GetState()
{
  player_msghdr_t hdr;  
  player_log_get_state_t req;

  req.subtype = PLAYER_LOG_GET_STATE_REQ;

  if(client->Request(m_device_id, (const char *)&req, sizeof(req),
                     &hdr, (char*)&req, sizeof(req)) < 0)
    return(-1);

  this->type = req.type;
  this->state = req.state;
  return(0);
}

int 
LogProxy::SetWriteState(int state_)
{
  player_log_set_write_state_t req;

  req.subtype = PLAYER_LOG_SET_WRITE_STATE_REQ;
  req.state = (uint8_t)state_;

  return(client->Request(m_device_id, (const char *)&req, sizeof(req)));
}

int 
LogProxy::SetReadState(int state_)
{
  player_log_set_read_state_t req;

  req.subtype = PLAYER_LOG_SET_READ_STATE_REQ;
  req.state = (uint8_t)state_;

  if(client->Request(m_device_id, (const char *)&req, sizeof(req)) < 0)
    return(-1);
  this->state = (uint8_t)state;
  return(0);
}

int
LogProxy::Rewind()
{
  player_log_set_read_rewind_t req;

  req.subtype = PLAYER_LOG_SET_READ_REWIND_REQ;

  return(client->Request(m_device_id, (const char *)&req, sizeof(req)));
}

int
LogProxy::SetFilename(const char* fname)
{
  player_log_set_filename_t req;

  req.subtype = PLAYER_LOG_SET_FILENAME;

  if(strlen(fname) > (sizeof(req.filename)-1))
  {
    puts("filename too long");
    return(-1);
  }
  strcpy((char*)req.filename,fname);

  return(client->Request(m_device_id, (const char *)&req, sizeof(req)));
}
