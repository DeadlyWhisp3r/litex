
# Create Project

create_project -force -name digilent_nexys4 -part xc7a100tcsg324-1
set_msg_config -id {Common 17-55} -new_severity {Warning}

# Add project commands


# Add Sources

read_verilog {/home/casper/thesis_work/liteX/verilog_src/adder_v2.v}
read_verilog {/home/casper/thesis_work/liteX/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog/VexRiscv_Debug.v}
read_verilog {/home/casper/thesis_work/liteX/build/digilent_nexys4/gateware/digilent_nexys4.v}

# Add EDIFs


# Add IPs


# Add constraints

read_xdc digilent_nexys4.xdc
set_property PROCESSING_ORDER EARLY [get_files digilent_nexys4.xdc]

# Add pre-synthesis commands


# Synthesis

synth_design -directive default -top digilent_nexys4 -part xc7a100tcsg324-1

# Synthesis report

report_timing_summary -file digilent_nexys4_timing_synth.rpt
report_utilization -hierarchical -file digilent_nexys4_utilization_hierarchical_synth.rpt
report_utilization -file digilent_nexys4_utilization_synth.rpt
write_checkpoint -force digilent_nexys4_synth.dcp

# Add pre-optimize commands


# Optimize design

opt_design -directive default

# Add pre-placement commands


# Placement

place_design -directive default

# Placement report

report_utilization -hierarchical -file digilent_nexys4_utilization_hierarchical_place.rpt
report_utilization -file digilent_nexys4_utilization_place.rpt
report_io -file digilent_nexys4_io.rpt
report_control_sets -verbose -file digilent_nexys4_control_sets.rpt
report_clock_utilization -file digilent_nexys4_clock_utilization.rpt
write_checkpoint -force digilent_nexys4_place.dcp

# Add pre-routing commands


# Routing

route_design -directive default
phys_opt_design -directive default
write_checkpoint -force digilent_nexys4_route.dcp

# Routing report

report_timing_summary -no_header -no_detailed_paths
report_route_status -file digilent_nexys4_route_status.rpt
report_drc -file digilent_nexys4_drc.rpt
report_timing_summary -datasheet -max_paths 10 -file digilent_nexys4_timing.rpt
report_power -file digilent_nexys4_power.rpt

# Bitstream generation

write_bitstream -force digilent_nexys4.bit 

# End

quit