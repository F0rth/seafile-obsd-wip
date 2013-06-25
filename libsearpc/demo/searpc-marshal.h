
static gchar *
marshal_int__string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);

    int ret = ((int (*)(const gchar*, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}

static void register_marshals()
{

    {
        searpc_server_register_marshal (searpc_signature_int__string(), marshal_int__string);
    }
}
