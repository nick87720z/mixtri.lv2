// generated by lv2ttl2c from
// http://gareus.org/oss/lv2/mixtri#lv2

extern const LV2_Descriptor* lv2_descriptor(uint32_t index);
extern const LV2UI_Descriptor* lv2ui_descriptor(uint32_t index);

static const RtkLv2Description _plugin_mixtri = {
	&lv2_descriptor,
	&lv2ui_descriptor
	, 0 // uint32_t dsp_descriptor_id
	, 0 // uint32_t gui_descriptor_id
	, "Mixer'n'Trigger" // const char *plugin_human_id
	, (const struct LV2Port[42])
	{
		{ "in1", AUDIO_IN, nan},
		{ "in2", AUDIO_IN, nan},
		{ "in3", AUDIO_IN, nan},
		{ "in4", AUDIO_IN, nan},
		{ "out1", AUDIO_OUT, nan},
		{ "out2", AUDIO_OUT, nan},
		{ "out3", AUDIO_OUT, nan},
		{ "trigger_out", AUDIO_OUT, nan},
		{ "gain_in_0", CONTROL_IN, 0.000000},
		{ "gain_in_1", CONTROL_IN, 0.000000},
		{ "gain_in_2", CONTROL_IN, 0.000000},
		{ "gain_in_3", CONTROL_IN, 0.000000},
		{ "mix_0_0", CONTROL_IN, 1.000000},
		{ "mix_0_1", CONTROL_IN, 0.000000},
		{ "mix_0_2", CONTROL_IN, 0.000000},
		{ "mix_1_0", CONTROL_IN, 0.000000},
		{ "mix_1_1", CONTROL_IN, 1.000000},
		{ "mix_1_2", CONTROL_IN, 0.000000},
		{ "mix_2_0", CONTROL_IN, 0.000000},
		{ "mix_2_1", CONTROL_IN, 0.000000},
		{ "mix_2_2", CONTROL_IN, 1.000000},
		{ "mix_3_0", CONTROL_IN, 0.000000},
		{ "mix_3_1", CONTROL_IN, 0.000000},
		{ "mix_3_2", CONTROL_IN, 0.000000},
		{ "delay_in_0", CONTROL_IN, 0.000000},
		{ "delay_in_1", CONTROL_IN, 0.000000},
		{ "delay_in_2", CONTROL_IN, 0.000000},
		{ "delay_in_3", CONTROL_IN, 0.000000},
		{ "delay_out_0", CONTROL_IN, 0.000000},
		{ "delay_out_1", CONTROL_IN, 0.000000},
		{ "delay_out_2", CONTROL_IN, 0.000000},
		{ "mod_in_0", CONTROL_IN, 0.000000},
		{ "mod_in_1", CONTROL_IN, 0.000000},
		{ "mod_in_2", CONTROL_IN, 0.000000},
		{ "mod_in_3", CONTROL_IN, 0.000000},
		{ "trigger_channel", CONTROL_IN, 3.000000},
		{ "trigger_mode", CONTROL_IN, 0.000000},
		{ "trigger_edge", CONTROL_IN, 1.000000},
		{ "trigger_level1", CONTROL_IN, 0.000000},
		{ "trigger_level2", CONTROL_IN, 0.000000},
		{ "trigger_time1", CONTROL_IN, 0.000000},
		{ "trigger_time2", CONTROL_IN, 0.000000},
	}
	, 42 // uint32_t nports_total
	, 4 // uint32_t nports_audio_in
	, 4 // uint32_t nports_audio_out
	, 0 // uint32_t nports_midi_in
	, 0 // uint32_t nports_midi_out
	, 0 // uint32_t nports_atom_in
	, 0 // uint32_t nports_atom_out
	, 34 // uint32_t nports_ctrl
	, 34 // uint32_t nports_ctrl_in
	, 0 // uint32_t nports_ctrl_out
	, 8192 // uint32_t min_atom_bufsiz
	, false // bool send_time_info
};

#ifdef X42_PLUGIN_STRUCT
#undef X42_PLUGIN_STRUCT
#endif
#define X42_PLUGIN_STRUCT _plugin_mixtri
