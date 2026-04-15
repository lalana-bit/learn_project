#include "app.h"
#include "logger.h"
#include <stdio.h>

int main() {
    App app;
    
    /* Initialize logger */
    logger_init(LOG_DEBUG);
    
    /* Initialize application */
    app_init(&app, "MyApp");
    
    /* Run application */
    app_run(&app);
    
    /* Stop application */
    app_stop(&app);
    
    /* Cleanup application */
    app_cleanup(&app);
    
    printf("Application terminated\n");
    
    return 0;
}
