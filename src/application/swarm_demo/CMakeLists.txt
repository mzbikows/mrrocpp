add_executable(ecp_swarm_demo
	ecp_t_swarm_demo.cc
)

target_link_libraries(ecp_swarm_demo ecp)


add_executable(mp_swarm_demo
	mp_t_swarm_demo.cc
)

target_link_libraries(mp_swarm_demo mp)

install(TARGETS ecp_swarm_demo mp_swarm_demo DESTINATION bin)
