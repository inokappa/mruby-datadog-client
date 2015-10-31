/*
** mrb_datadog-client.c - datadog-client class
**
** Copyright (c) Yohei Kawahara 2015
**
** See Copyright Notice in LICENSE
*/

#include "mruby.h"
#include "mruby/data.h"
#include "mrb_datadog-client.h"

#define DONE mrb_gc_arena_restore(mrb, 0);

typedef struct {
  char *str;
  int len;
} mrb_datadog-client_data;

static const struct mrb_data_type mrb_datadog-client_data_type = {
  "mrb_datadog-client_data", mrb_free,
};

static mrb_value mrb_datadog-client_init(mrb_state *mrb, mrb_value self)
{
  mrb_datadog-client_data *data;
  char *str;
  int len;

  data = (mrb_datadog-client_data *)DATA_PTR(self);
  if (data) {
    mrb_free(mrb, data);
  }
  DATA_TYPE(self) = &mrb_datadog-client_data_type;
  DATA_PTR(self) = NULL;

  mrb_get_args(mrb, "s", &str, &len);
  data = (mrb_datadog-client_data *)mrb_malloc(mrb, sizeof(mrb_datadog-client_data));
  data->str = str;
  data->len = len;
  DATA_PTR(self) = data;

  return self;
}

static mrb_value mrb_datadog-client_hello(mrb_state *mrb, mrb_value self)
{
  mrb_datadog-client_data *data = DATA_PTR(self);

  return mrb_str_new(mrb, data->str, data->len);
}

static mrb_value mrb_datadog-client_hi(mrb_state *mrb, mrb_value self)
{
  return mrb_str_new_cstr(mrb, "hi!!");
}

void mrb_mruby_datadog-client_gem_init(mrb_state *mrb)
{
    struct RClass *datadog-client;
    datadog-client = mrb_define_class(mrb, "datadog-client", mrb->object_class);
    mrb_define_method(mrb, datadog-client, "initialize", mrb_datadog-client_init, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, datadog-client, "hello", mrb_datadog-client_hello, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, datadog-client, "hi", mrb_datadog-client_hi, MRB_ARGS_NONE());
    DONE;
}

void mrb_mruby_datadog-client_gem_final(mrb_state *mrb)
{
}

