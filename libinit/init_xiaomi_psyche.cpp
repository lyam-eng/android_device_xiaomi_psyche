/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t psyche_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "psyche",
    .marketname = "Xiaomi 12x",
    .model = "2112123AG",
    .build_fingerprint = "Xiaomi/psyche_global/psyche:12/SQ3A.220705.003/V13.0.5.0.SLDMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t psyche_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "psyche",
    .marketname = "Xiaomi 12x",
    .model = "2112123AC",
    .build_fingerprint = "Redmi/psyche/psyche:12/SQ3A.220705.003/V13.0.5.0.SLDEUXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    psyche_global_info,
    psyche_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
