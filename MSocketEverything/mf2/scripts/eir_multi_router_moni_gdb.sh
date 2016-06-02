#!/bin/bash
export MF_CLICK_LOG_LEVEL=1

click_config=/root/mobilityfirst/router/click/conf/MF_MultiRouter_eir.click
#router_GUID=$1
aNode_num=$2;
topology_file=/root/topology/mobility_topo
topo_latency_file=/root/topology/mobility_latency
#topo_latency_file=/root/topology/testcfg_1-gstar_10node_latencyclean.tp
#interface=eth
is_border_router=$4
gnrs_server_ip=10.14.1.8
window_size=1500
gnrs_server_port=5001
local_ip=10.14.1.1
#local_port=4001
ASID=$5
log="/root/scripts/eir_log"
router_GUID=$1
eir_log="$log$1"

local_port=$((4000+$3))
intnum=$3
interface="eth"$intnum
#/usr/local/bin/click -p $6 -j 4 $click_config \
gdb --args /usr/local/bin/click -j 4 $click_config \
                     my_GUID=$router_GUID topo_file=$topology_file \
                     latency_file=$topo_latency_file \
                     aNodeID=$aNode_num \
                     asid=$ASID \
		     window_size=$window_size \
                     is_border=$is_border_router \
                     core_dev=$interface \
                     GNRS_server_ip=$gnrs_server_ip GNRS_server_port=$gnrs_server_port \
                     GNRS_listen_ip=$local_ip GNRS_listen_port=$local_port
#echo "/usr/local/bin/click -j 4 $click_config my_GUID=$router_GUID topo_file=$topology_file core_dev=$interface GNRS_server_ip=$gnrs_server_ip GNRS_server_port=$gnrs_server_port GNRS_listen_ip=$local_ip GNRS_listen_port=$local_port"
