#include "app.h"
#include "logger.h"
#include <stdlib.h>
#include <string.h>

void app_init(App *app, const char *name) {
    app->name = strdup(name);
    app->status = APP_INIT;
    log_info("App %s initialized", app->name);
}

void app_run(App *app) {
    app->status = APP_RUNNING;
    log_info("App %s running", app->name);
    
    /* Simulate application running */
    int i;
    for (i = 0; i < 5; i++) {
        log_debug("Iteration %d", i);
    }
}

void app_stop(App *app) {
    app->status = APP_STOPPED;
    log_info("App %s stopped", app->name);
}

void app_cleanup(App *app) {
    log_info("Cleaning up app %s", app->name);
    free(app->name);
}
