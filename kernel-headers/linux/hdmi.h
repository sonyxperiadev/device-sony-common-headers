/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_HDMI_H_
#define __LINUX_HDMI_H_
#include <linux/types.h>
enum hdmi_infoframe_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_INFOFRAME_TYPE_VENDOR = 0x81,
  HDMI_INFOFRAME_TYPE_AVI = 0x82,
  HDMI_INFOFRAME_TYPE_SPD = 0x83,
  HDMI_INFOFRAME_TYPE_AUDIO = 0x84,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define HDMI_IEEE_OUI 0x000c03
#define HDMI_INFOFRAME_HEADER_SIZE 4
#define HDMI_AVI_INFOFRAME_SIZE 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HDMI_SPD_INFOFRAME_SIZE 25
#define HDMI_AUDIO_INFOFRAME_SIZE 10
#define HDMI_INFOFRAME_SIZE(type) (HDMI_INFOFRAME_HEADER_SIZE + HDMI_ ##type ##_INFOFRAME_SIZE)
struct hdmi_any_infoframe {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_infoframe_type type;
  unsigned char version;
  unsigned char length;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hdmi_colorspace {
  HDMI_COLORSPACE_RGB,
  HDMI_COLORSPACE_YUV422,
  HDMI_COLORSPACE_YUV444,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum hdmi_scan_mode {
  HDMI_SCAN_MODE_NONE,
  HDMI_SCAN_MODE_OVERSCAN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_SCAN_MODE_UNDERSCAN,
};
enum hdmi_colorimetry {
  HDMI_COLORIMETRY_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_COLORIMETRY_ITU_601,
  HDMI_COLORIMETRY_ITU_709,
  HDMI_COLORIMETRY_EXTENDED,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hdmi_picture_aspect {
  HDMI_PICTURE_ASPECT_NONE,
  HDMI_PICTURE_ASPECT_4_3,
  HDMI_PICTURE_ASPECT_16_9,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum hdmi_active_aspect {
  HDMI_ACTIVE_ASPECT_16_9_TOP = 2,
  HDMI_ACTIVE_ASPECT_14_9_TOP = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_ACTIVE_ASPECT_16_9_CENTER = 4,
  HDMI_ACTIVE_ASPECT_PICTURE = 8,
  HDMI_ACTIVE_ASPECT_4_3 = 9,
  HDMI_ACTIVE_ASPECT_16_9 = 10,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_ACTIVE_ASPECT_14_9 = 11,
  HDMI_ACTIVE_ASPECT_4_3_SP_14_9 = 13,
  HDMI_ACTIVE_ASPECT_16_9_SP_14_9 = 14,
  HDMI_ACTIVE_ASPECT_16_9_SP_4_3 = 15,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum hdmi_extended_colorimetry {
  HDMI_EXTENDED_COLORIMETRY_XV_YCC_601,
  HDMI_EXTENDED_COLORIMETRY_XV_YCC_709,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_EXTENDED_COLORIMETRY_S_YCC_601,
  HDMI_EXTENDED_COLORIMETRY_ADOBE_YCC_601,
  HDMI_EXTENDED_COLORIMETRY_ADOBE_RGB,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hdmi_quantization_range {
  HDMI_QUANTIZATION_RANGE_DEFAULT,
  HDMI_QUANTIZATION_RANGE_LIMITED,
  HDMI_QUANTIZATION_RANGE_FULL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum hdmi_nups {
  HDMI_NUPS_UNKNOWN,
  HDMI_NUPS_HORIZONTAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_NUPS_VERTICAL,
  HDMI_NUPS_BOTH,
};
enum hdmi_ycc_quantization_range {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_YCC_QUANTIZATION_RANGE_LIMITED,
  HDMI_YCC_QUANTIZATION_RANGE_FULL,
};
enum hdmi_content_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_CONTENT_TYPE_NONE,
  HDMI_CONTENT_TYPE_PHOTO,
  HDMI_CONTENT_TYPE_CINEMA,
  HDMI_CONTENT_TYPE_GAME,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hdmi_avi_infoframe {
  enum hdmi_infoframe_type type;
  unsigned char version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char length;
  enum hdmi_colorspace colorspace;
  enum hdmi_scan_mode scan_mode;
  enum hdmi_colorimetry colorimetry;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_picture_aspect picture_aspect;
  enum hdmi_active_aspect active_aspect;
  bool itc;
  enum hdmi_extended_colorimetry extended_colorimetry;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_quantization_range quantization_range;
  enum hdmi_nups nups;
  unsigned char video_code;
  enum hdmi_ycc_quantization_range ycc_quantization_range;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_content_type content_type;
  unsigned char pixel_repeat;
  unsigned short top_bar;
  unsigned short bottom_bar;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short left_bar;
  unsigned short right_bar;
};
enum hdmi_spd_sdi {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_SPD_SDI_UNKNOWN,
  HDMI_SPD_SDI_DSTB,
  HDMI_SPD_SDI_DVDP,
  HDMI_SPD_SDI_DVHS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_SPD_SDI_HDDVR,
  HDMI_SPD_SDI_DVC,
  HDMI_SPD_SDI_DSC,
  HDMI_SPD_SDI_VCD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_SPD_SDI_GAME,
  HDMI_SPD_SDI_PC,
  HDMI_SPD_SDI_BD,
  HDMI_SPD_SDI_SACD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_SPD_SDI_HDDVD,
  HDMI_SPD_SDI_PMP,
};
struct hdmi_spd_infoframe {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_infoframe_type type;
  unsigned char version;
  unsigned char length;
  char vendor[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  char product[16];
  enum hdmi_spd_sdi sdi;
};
enum hdmi_audio_coding_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_CODING_TYPE_STREAM,
  HDMI_AUDIO_CODING_TYPE_PCM,
  HDMI_AUDIO_CODING_TYPE_AC3,
  HDMI_AUDIO_CODING_TYPE_MPEG1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_CODING_TYPE_MP3,
  HDMI_AUDIO_CODING_TYPE_MPEG2,
  HDMI_AUDIO_CODING_TYPE_AAC_LC,
  HDMI_AUDIO_CODING_TYPE_DTS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_CODING_TYPE_ATRAC,
  HDMI_AUDIO_CODING_TYPE_DSD,
  HDMI_AUDIO_CODING_TYPE_EAC3,
  HDMI_AUDIO_CODING_TYPE_DTS_HD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_CODING_TYPE_MLP,
  HDMI_AUDIO_CODING_TYPE_DST,
  HDMI_AUDIO_CODING_TYPE_WMA_PRO,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hdmi_audio_sample_size {
  HDMI_AUDIO_SAMPLE_SIZE_STREAM,
  HDMI_AUDIO_SAMPLE_SIZE_16,
  HDMI_AUDIO_SAMPLE_SIZE_20,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_SAMPLE_SIZE_24,
};
enum hdmi_audio_sample_frequency {
  HDMI_AUDIO_SAMPLE_FREQUENCY_STREAM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_SAMPLE_FREQUENCY_32000,
  HDMI_AUDIO_SAMPLE_FREQUENCY_44100,
  HDMI_AUDIO_SAMPLE_FREQUENCY_48000,
  HDMI_AUDIO_SAMPLE_FREQUENCY_88200,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_SAMPLE_FREQUENCY_96000,
  HDMI_AUDIO_SAMPLE_FREQUENCY_176400,
  HDMI_AUDIO_SAMPLE_FREQUENCY_192000,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hdmi_audio_coding_type_ext {
  HDMI_AUDIO_CODING_TYPE_EXT_STREAM,
  HDMI_AUDIO_CODING_TYPE_EXT_HE_AAC,
  HDMI_AUDIO_CODING_TYPE_EXT_HE_AAC_V2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_AUDIO_CODING_TYPE_EXT_MPEG_SURROUND,
};
struct hdmi_audio_infoframe {
  enum hdmi_infoframe_type type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char version;
  unsigned char length;
  unsigned char channels;
  enum hdmi_audio_coding_type coding_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_audio_sample_size sample_size;
  enum hdmi_audio_sample_frequency sample_frequency;
  enum hdmi_audio_coding_type_ext coding_type_ext;
  unsigned char channel_allocation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char level_shift_value;
  bool downmix_inhibit;
};
enum hdmi_3d_structure {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_3D_STRUCTURE_INVALID = - 1,
  HDMI_3D_STRUCTURE_FRAME_PACKING = 0,
  HDMI_3D_STRUCTURE_FIELD_ALTERNATIVE,
  HDMI_3D_STRUCTURE_LINE_ALTERNATIVE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_3D_STRUCTURE_SIDE_BY_SIDE_FULL,
  HDMI_3D_STRUCTURE_L_DEPTH,
  HDMI_3D_STRUCTURE_L_DEPTH_GFX_GFX_DEPTH,
  HDMI_3D_STRUCTURE_TOP_AND_BOTTOM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HDMI_3D_STRUCTURE_SIDE_BY_SIDE_HALF = 8,
};
struct hdmi_vendor_infoframe {
  enum hdmi_infoframe_type type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char version;
  unsigned char length;
  unsigned int oui;
  u8 vic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum hdmi_3d_structure s3d_struct;
  unsigned int s3d_ext_data;
};
union hdmi_vendor_any_infoframe {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct {
    enum hdmi_infoframe_type type;
    unsigned char version;
    unsigned char length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    unsigned int oui;
  } any;
  struct hdmi_vendor_infoframe hdmi;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union hdmi_infoframe {
  struct hdmi_any_infoframe any;
  struct hdmi_avi_infoframe avi;
  struct hdmi_spd_infoframe spd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union hdmi_vendor_any_infoframe vendor;
  struct hdmi_audio_infoframe audio;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
