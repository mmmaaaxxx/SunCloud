// ce script charge le module arktoolbox puis lance la simulation
exec("SCI/contrib/arktoolbox-scicos/loader.sce");
//demo initiale
scicos "SCI/contrib/arktoolbox-scicos/demos/block/JSBSimBackside.cos";
//demo amélioré
//scicos "C:/Users/Sun-Cloud/Documents/bloc-scicoslab/CommJSBSimBackside.cos";