/*
 * Copyright (C) 2016 Swift Navigation Inc.
 * Contact: Roman Gezikov <rgezikov@exafore.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "ndb.h"
#include "ndb_internal.h"


enum ndb_op_code ndb_gps_l2cm_l2c_cap_store(u32 *l2c_cap,
                                            enum ndb_data_source src) NDB_WEAK;
enum ndb_op_code ndb_gps_l2cm_l2c_cap_read(u32 *l2c_cap) NDB_WEAK;
void ndb_p3_sbp_update() NDB_WEAK;
