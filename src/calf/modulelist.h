    PER_MODULE_ITEM(filter, false, "filter")
    PER_MODULE_ITEM(flanger, false, "flanger")
    PER_MODULE_ITEM(reverb, false, "reverb")
    PER_MODULE_ITEM(monosynth, true, "monosynth")
    PER_MODULE_ITEM(vintage_delay, false, "vintagedelay")
    PER_MODULE_ITEM(organ, true, "organ")
    PER_MODULE_ITEM(rotary_speaker, false, "rotaryspeaker")
    PER_MODULE_ITEM(phaser, false, "phaser")
#ifdef ENABLE_EXPERIMENTAL
    PER_SMALL_MODULE_ITEM(lp_filter, "lowpass12")
    PER_SMALL_MODULE_ITEM(hp_filter, "highpass12")
    PER_SMALL_MODULE_ITEM(bp_filter, "bandpass6")
    PER_SMALL_MODULE_ITEM(br_filter, "notch6")
    PER_SMALL_MODULE_ITEM(onepole_lp_filter, "lowpass6")
    PER_SMALL_MODULE_ITEM(onepole_hp_filter, "highpass6")
    PER_SMALL_MODULE_ITEM(onepole_ap_filter, "allpass")
    PER_SMALL_MODULE_ITEM(min, "min")
    PER_SMALL_MODULE_ITEM(max, "max")
    PER_SMALL_MODULE_ITEM(minus, "minus")
    PER_SMALL_MODULE_ITEM(mul, "mul")
    PER_SMALL_MODULE_ITEM(neg, "neg")
    PER_SMALL_MODULE_ITEM(map_lin2exp, "lin2exp")
    PER_SMALL_MODULE_ITEM(square_osc, "square_osc")
    PER_SMALL_MODULE_ITEM(saw_osc, "saw_osc")
    PER_SMALL_MODULE_ITEM(print, "print")
    PER_SMALL_MODULE_ITEM(print2, "print2")
    PER_SMALL_MODULE_ITEM(quadpower_a, "quadpower_a")
    PER_SMALL_MODULE_ITEM(quadpower_c, "quadpower_c")
#endif
#undef PER_MODULE_ITEM
#undef PER_SMALL_MODULE_ITEM
