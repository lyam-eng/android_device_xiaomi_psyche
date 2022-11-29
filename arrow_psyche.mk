#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common lineage stuff.
$(call inherit-product, vendor/arrow/config/common.mk)

# Inherit from alioth device
$(call inherit-product, device/xiaomi/psyche/device.mk)

PRODUCT_NAME := arrow_psyche
PRODUCT_DEVICE := psyche
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := Xiaomi 12x

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

PRODUCT_BUILD_PROP_OVERRIDES += \
   PRIVATE_BUILD_DESC="missi-user 12 SQ3A.220705.003 V13.0.5.0.SLDEUXM release-keys"

BUILD_FINGERPRINT := Xiaomi/psyche_eea/psyche:12/RKQ1.211001.001/V13.0.5.0.SLDEUXM:user/release-keys
