/*
 * This file was automatically generated by oml2-scaffold V2.10.0
 * for click_mon version 0.9.1.
 * Please do not edit.
 */

#ifndef CLICK_MON_OML_H
#define CLICK_MON_OML_H

#ifdef __cplusplus
extern "C" {
#endif

/* Get size_t and NULL from <stddef.h>.  */
#include <stddef.h>

#include <oml2/omlc.h>

typedef struct {
  OmlMP* packet_stats;
  OmlMP* link_stats;
  OmlMP* routing_stats;

} oml_mps_t;


#ifdef OML_FROM_MAIN
/*
 * Only declare storage once, usually from the main
 * source, where OML_FROM_MAIN is defined
 */

static OmlMPDef oml_packet_stats_def[] = {
  {"mp_index", OML_UINT32_VALUE},
  {"node_id", OML_STRING_VALUE},
  {"port_id", OML_STRING_VALUE},
  {"in_pkts", OML_UINT64_VALUE},
  {"out_pkts", OML_UINT64_VALUE},
  {"errors", OML_UINT64_VALUE},
  {"dropped", OML_UINT64_VALUE},
  {"in_bytes", OML_UINT64_VALUE},
  {"out_bytes", OML_UINT64_VALUE},
  {"in_tput_mbps", OML_DOUBLE_VALUE},
  {"out_tput_mbps", OML_DOUBLE_VALUE},
  {NULL, (OmlValueT)0}
};

static OmlMPDef oml_link_stats_def[] = {
  {"mp_index", OML_UINT32_VALUE},
  {"link_label", OML_STRING_VALUE},
  {"node_id", OML_STRING_VALUE},
  {"nbr_id", OML_STRING_VALUE},
  {"bitrate_mbps", OML_DOUBLE_VALUE},
  {"s_ett_usec", OML_UINT32_VALUE},
  {"l_ett_usec", OML_UINT32_VALUE},
  {"in_pkts", OML_UINT64_VALUE},
  {"out_pkts", OML_UINT64_VALUE},
  {"in_bytes", OML_UINT64_VALUE},
  {"out_bytes", OML_UINT64_VALUE},
  {"in_tput_mbps", OML_DOUBLE_VALUE},
  {"out_tput_mbps", OML_DOUBLE_VALUE},
  {NULL, (OmlValueT)0}
};

static OmlMPDef oml_routing_stats_def[] = {
  {"mp_index", OML_UINT32_VALUE},
  {"node_id", OML_STRING_VALUE},
  {"in_chunks", OML_UINT64_VALUE},
  {"out_chunks", OML_UINT64_VALUE},
  {"in_ctrl_msgs", OML_UINT64_VALUE},
  {"out_ctrl_msgs", OML_UINT64_VALUE},
  {"stored_chunks", OML_UINT64_VALUE},
  {"error_chunks", OML_UINT64_VALUE},
  {"dropped_chunks", OML_UINT64_VALUE},
  {"in_data_bytes", OML_UINT64_VALUE},
  {"out_data_bytes", OML_UINT64_VALUE},
  {"in_ctrl_bytes", OML_UINT64_VALUE},
  {"out_ctrl_bytes", OML_UINT64_VALUE},
  {NULL, (OmlValueT)0}
};

static oml_mps_t g_oml_mps_storage;
oml_mps_t* g_oml_mps_click_mon = &g_oml_mps_storage;

static inline void
oml_register_mps()
{
  g_oml_mps_click_mon->packet_stats = omlc_add_mp("packet_stats", oml_packet_stats_def);
  g_oml_mps_click_mon->link_stats = omlc_add_mp("link_stats", oml_link_stats_def);
  g_oml_mps_click_mon->routing_stats = omlc_add_mp("routing_stats", oml_routing_stats_def);

}

#else
/*
 * Not included from the main source, only declare the global pointer
 * to the MPs and injection helpers.
 */

extern oml_mps_t* g_oml_mps_click_mon;

#endif /* OML_FROM_MAIN */

static inline void
oml_inject_packet_stats(OmlMP* mp, uint32_t mp_index, const char* node_id, const char* port_id, uint64_t in_pkts, uint64_t out_pkts, uint64_t errors, uint64_t dropped, uint64_t in_bytes, uint64_t out_bytes, double in_tput_mbps, double out_tput_mbps)
{
  OmlValueU v[11];

  omlc_zero_array(v, 11);

  omlc_set_uint32(v[0], mp_index);
  omlc_set_string(v[1], node_id);
  omlc_set_string(v[2], port_id);
  omlc_set_uint64(v[3], in_pkts);
  omlc_set_uint64(v[4], out_pkts);
  omlc_set_uint64(v[5], errors);
  omlc_set_uint64(v[6], dropped);
  omlc_set_uint64(v[7], in_bytes);
  omlc_set_uint64(v[8], out_bytes);
  omlc_set_double(v[9], in_tput_mbps);
  omlc_set_double(v[10], out_tput_mbps);

  omlc_inject(mp, v);

  omlc_reset_string(v[1]);
  omlc_reset_string(v[2]);
}

static inline void
oml_inject_link_stats(OmlMP* mp, uint32_t mp_index, const char* link_label, const char* node_id, const char* nbr_id, double bitrate_mbps, uint32_t s_ett_usec, uint32_t l_ett_usec, uint64_t in_pkts, uint64_t out_pkts, uint64_t in_bytes, uint64_t out_bytes, double in_tput_mbps, double out_tput_mbps)
{
  OmlValueU v[13];

  omlc_zero_array(v, 13);

  omlc_set_uint32(v[0], mp_index);
  omlc_set_string(v[1], link_label);
  omlc_set_string(v[2], node_id);
  omlc_set_string(v[3], nbr_id);
  omlc_set_double(v[4], bitrate_mbps);
  omlc_set_uint32(v[5], s_ett_usec);
  omlc_set_uint32(v[6], l_ett_usec);
  omlc_set_uint64(v[7], in_pkts);
  omlc_set_uint64(v[8], out_pkts);
  omlc_set_uint64(v[9], in_bytes);
  omlc_set_uint64(v[10], out_bytes);
  omlc_set_double(v[11], in_tput_mbps);
  omlc_set_double(v[12], out_tput_mbps);

  omlc_inject(mp, v);

  omlc_reset_string(v[1]);
  omlc_reset_string(v[2]);
  omlc_reset_string(v[3]);
}

static inline void
oml_inject_routing_stats(OmlMP* mp, uint32_t mp_index, const char* node_id, uint64_t in_chunks, uint64_t out_chunks, uint64_t in_ctrl_msgs, uint64_t out_ctrl_msgs, uint64_t stored_chunks, uint64_t error_chunks, uint64_t dropped_chunks, uint64_t in_data_bytes, uint64_t out_data_bytes, uint64_t in_ctrl_bytes, uint64_t out_ctrl_bytes)
{
  OmlValueU v[13];

  omlc_zero_array(v, 13);

  omlc_set_uint32(v[0], mp_index);
  omlc_set_string(v[1], node_id);
  omlc_set_uint64(v[2], in_chunks);
  omlc_set_uint64(v[3], out_chunks);
  omlc_set_uint64(v[4], in_ctrl_msgs);
  omlc_set_uint64(v[5], out_ctrl_msgs);
  omlc_set_uint64(v[6], stored_chunks);
  omlc_set_uint64(v[7], error_chunks);
  omlc_set_uint64(v[8], dropped_chunks);
  omlc_set_uint64(v[9], in_data_bytes);
  omlc_set_uint64(v[10], out_data_bytes);
  omlc_set_uint64(v[11], in_ctrl_bytes);
  omlc_set_uint64(v[12], out_ctrl_bytes);

  omlc_inject(mp, v);

  omlc_reset_string(v[1]);
}


/* Compatibility with old applications */
#ifndef g_oml_mps
# define g_oml_mps	g_oml_mps_click_mon
#endif

#ifdef __cplusplus
}
#endif

#endif /* CLICK_MON_OML_H */