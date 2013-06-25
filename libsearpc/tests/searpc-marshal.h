
static gchar *
marshal_string__string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);

    gchar* ret = ((gchar* (*)(const gchar*, int, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_object__string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);

    GObject* ret = ((GObject* (*)(const gchar*, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_object_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);

    GList* ret = ((GList* (*)(const gchar*, int, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}

static void register_marshals()
{

    {
        searpc_server_register_marshal (searpc_signature_string__string_int(), marshal_string__string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_object__string(), marshal_object__string);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_int(), marshal_objlist__string_int);
    }
}
