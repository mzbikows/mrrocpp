add_library(messip
	logg_messip.c messip_lib.c
	messip_utils.c messip_dataport.cc)

add_executable(messip_mgr messip_mgr.c)
target_link_libraries (messip_mgr messip
	${CMAKE_THREAD_LIBS_INIT} ${COMPATIBILITY_LIBRARIES}) 
install(TARGETS messip_mgr DESTINATION bin)

add_executable(messip_sin messip_sin.c)
target_link_libraries (messip_sin messip
	${CMAKE_THREAD_LIBS_INIT} ${COMPATIBILITY_LIBRARIES})
install(TARGETS messip_sin DESTINATION bin)

if(QNXNTO)
target_link_libraries (messip socket rpc)
endif(QNXNTO)
