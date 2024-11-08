/*
 * config.h - Configuration info for the bomb's automatic notification feature
 */
#ifndef __CONFIG_H__
#define __CONFIG_H__

/*
 * We don't want copies of bombs from all over the world contacting
 * our server, so restrict bomb execution to one of the machines on
 * the following NULL-terminated comma-separated list:
 */
char *host_table[128] = {

    /* Put your host names here */
    "antikythera",
    "alexandrite.cs.utexas.edu",
    "amazonite.cs.utexas.edu",
    "amber.cs.utexas.edu",
    "ammolite.cs.utexas.edu",
    "aquamarine.cs.utexas.edu",
    "aragonite.cs.utexas.edu",
    "aventurine.cs.utexas.edu",
    "azurite.cs.utexas.edu",
    "beryl.cs.utexas.edu",
    "bixbite.cs.utexas.edu",
    "blizzard-stone.cs.utexas.edu",
    "bloodstone.cs.utexas.edu",
    "brazilianite.cs.utexas.edu",
    "bumblebee-jasper.cs.utexas.edu",
    "calcite.cs.utexas.edu",
    "celestite.cs.utexas.edu",
    "ceruleite.cs.utexas.edu",
    "chalcedony.cs.utexas.edu",
    "chicken-blood-stone.cs.utexas.edu",
    "childrenite.cs.utexas.edu",
    "chromite.cs.utexas.edu",
    "chrysoberyl.cs.utexas.edu",
    "cinnabar.cs.utexas.edu",
    "citrine.cs.utexas.edu",
    "coral.cs.utexas.edu",
    "cubic-zirconia.cs.utexas.edu",
    "diamond.cs.utexas.edu",
    "ekanite.cs.utexas.edu",
    "emerald.cs.utexas.edu",
    "fluorite.cs.utexas.edu",
    "fossil-coral.cs.utexas.edu",
    "garnet.cs.utexas.edu",
    "hackmanite.cs.utexas.edu",
    "hambergite.cs.utexas.edu",
    "hawks-eye.cs.utexas.edu",
    "heliodor.cs.utexas.edu",
    "hematite.cs.utexas.edu",
    "hemimorphite.cs.utexas.edu",
    "hiddenite.cs.utexas.edu",
    "howlite.cs.utexas.edu",
    "jade.cs.utexas.edu",
    "jet.cs.utexas.edu",
    "kryptonite.cs.utexas.edu",
    "kyanite.cs.utexas.edu",
    "labradorite.cs.utexas.edu",
    "lapis-lazuli.cs.utexas.edu",
    "larimar.cs.utexas.edu",
    "lazulite.cs.utexas.edu",
    "malachite.cs.utexas.edu",
    "microlite.cs.utexas.edu",
    "mother-of-pearl.cs.utexas.edu",
    "neptunite.cs.utexas.edu",
    "nuummite.cs.utexas.edu",
    "onyx.cs.utexas.edu",
    "opal.cs.utexas.edu",
    "painite.cs.utexas.edu",
    "peanut-wood.cs.utexas.edu",
    "pearl.cs.utexas.edu",
    "peridot.cs.utexas.edu",
    "petrified-wood.cs.utexas.edu",
    "pigeon-blood-ruby.cs.utexas.edu",
    "pyrite.cs.utexas.edu",
    "quartz.cs.utexas.edu",
    "rhodonite.cs.utexas.edu",
    "ruby.cs.utexas.edu",
    "sapphire.cs.utexas.edu",
    "sardonyx.cs.utexas.edu",
    "selenite.cs.utexas.edu",
    "serpentine.cs.utexas.edu",
    "smithsonite.cs.utexas.edu",
    "sodalite.cs.utexas.edu",
    "spectrolite.cs.utexas.edu",
    "sunstone.cs.utexas.edu",
    "tigers-eye.cs.utexas.edu",
    "topaz.cs.utexas.edu",
    "tourmaline.cs.utexas.edu",
    "turquoise.cs.utexas.edu",
    "vivianite.cs.utexas.edu",
    "zultanite.cs.utexas.edu",

    0 /* The zero terminates the list */
};

#endif /* __CONFIG_H__ */
