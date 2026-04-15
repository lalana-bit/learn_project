#ifndef APP_H
#define APP_H

/* Application status */
typedef enum {
    APP_INIT,
    APP_RUNNING,
    APP_STOPPED
} AppStatus;

/* Application structure */
typedef struct {
    char *name;
    AppStatus status;
} App;

/* Initialize application */
void app_init(App *app, const char *name);

/* Run application */
void app_run(App *app);

/* Stop application */
void app_stop(App *app);

/* Cleanup application */
void app_cleanup(App *app);

#endif
