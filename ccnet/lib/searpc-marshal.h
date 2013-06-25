
static gchar *
marshal_int__void (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;

    int ret = ((int (*)(GError **))func) (&error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);

    int ret = ((int (*)(int, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);

    int ret = ((int (*)(int, int, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);

    int ret = ((int (*)(int, const gchar*, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);

    int ret = ((int (*)(int, const gchar*, int, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);

    int ret = ((int (*)(int, const gchar*, const gchar*, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_string_int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);
    int param4 = json_array_get_int_element (param_array, 4);

    int ret = ((int (*)(int, const gchar*, int, int, GError **))func) (param1, param2, param3, param4, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


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


static gchar *
marshal_int__string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);

    int ret = ((int (*)(const gchar*, int, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_int_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);

    int ret = ((int (*)(const gchar*, int, const gchar*, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_int_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);

    int ret = ((int (*)(const gchar*, int, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);

    int ret = ((int (*)(const gchar*, const gchar*, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);

    int ret = ((int (*)(const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);

    int ret = ((int (*)(const gchar*, const gchar*, int, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);
    int param4 = json_array_get_int_element (param_array, 4);

    int ret = ((int (*)(const gchar*, const gchar*, int, int, GError **))func) (param1, param2, param3, param4, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);

    int ret = ((int (*)(const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);

    int ret = ((int (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, param5, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);
    const gchar* param6 = json_array_get_string_or_null_element (param_array, 6);

    int ret = ((int (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, param5, param6, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_string_string_string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);
    const gchar* param6 = json_array_get_string_or_null_element (param_array, 6);
    const gchar* param7 = json_array_get_string_or_null_element (param_array, 7);

    int ret = ((int (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, param5, param6, param7, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__string_int64 (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    gint64 param2 = json_array_get_int_element (param_array, 2);

    int ret = ((int (*)(const gchar*, gint64, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_int64 (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    gint64 param2 = json_array_get_int_element (param_array, 2);

    int ret = ((int (*)(int, gint64, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int__int_string_int64 (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    gint64 param3 = json_array_get_int_element (param_array, 3);

    int ret = ((int (*)(int, const gchar*, gint64, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int64__void (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;

    gint64 ret = ((gint64 (*)(GError **))func) (&error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int64__string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);

    gint64 ret = ((gint64 (*)(const gchar*, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int64__int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);

    gint64 ret = ((gint64 (*)(int, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_int64__int_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);

    gint64 ret = ((gint64 (*)(int, const gchar*, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_int_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__void (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;

    gchar* ret = ((gchar* (*)(GError **))func) (&error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);

    gchar* ret = ((gchar* (*)(int, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);

    gchar* ret = ((gchar* (*)(const gchar*, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


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
marshal_string__string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string_string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    int param5 = json_array_get_int_element (param_array, 5);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, const gchar*, int, GError **))func) (param1, param2, param3, param4, param5, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, param5, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);
    const gchar* param6 = json_array_get_string_or_null_element (param_array, 6);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, param5, param6, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string_string_string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);
    int param6 = json_array_get_int_element (param_array, 6);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, int, GError **))func) (param1, param2, param3, param4, param5, param6, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_string__string_string_string_string_string_string_string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);
    const gchar* param4 = json_array_get_string_or_null_element (param_array, 4);
    const gchar* param5 = json_array_get_string_or_null_element (param_array, 5);
    const gchar* param6 = json_array_get_string_or_null_element (param_array, 6);
    const gchar* param7 = json_array_get_string_or_null_element (param_array, 7);
    const gchar* param8 = json_array_get_string_or_null_element (param_array, 8);
    const gchar* param9 = json_array_get_string_or_null_element (param_array, 9);

    gchar* ret = ((gchar* (*)(const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, param4, param5, param6, param7, param8, param9, &error);

    JsonObject *object = json_object_new ();
    searpc_set_string_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__void (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;

    GList* ret = ((GList* (*)(GError **))func) (&error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);

    GList* ret = ((GList* (*)(int, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);

    GList* ret = ((GList* (*)(int, int, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__int_int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);

    GList* ret = ((GList* (*)(int, int, int, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);

    GList* ret = ((GList* (*)(const gchar*, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
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


static gchar *
marshal_objlist__string_int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    int param2 = json_array_get_int_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);

    GList* ret = ((GList* (*)(const gchar*, int, int, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);

    GList* ret = ((GList* (*)(const gchar*, const gchar*, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__string_string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    const gchar* param3 = json_array_get_string_or_null_element (param_array, 3);

    GList* ret = ((GList* (*)(const gchar*, const gchar*, const gchar*, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__string_string_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);

    GList* ret = ((GList* (*)(const gchar*, const gchar*, int, GError **))func) (param1, param2, param3, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_objlist__string_string_int_int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);
    int param3 = json_array_get_int_element (param_array, 3);
    int param4 = json_array_get_int_element (param_array, 4);

    GList* ret = ((GList* (*)(const gchar*, const gchar*, int, int, GError **))func) (param1, param2, param3, param4, &error);

    JsonObject *object = json_object_new ();
    searpc_set_objlist_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_object__void (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;

    GObject* ret = ((GObject* (*)(GError **))func) (&error);

    JsonObject *object = json_object_new ();
    searpc_set_object_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}


static gchar *
marshal_object__int (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    int param1 = json_array_get_int_element (param_array, 1);

    GObject* ret = ((GObject* (*)(int, GError **))func) (param1, &error);

    JsonObject *object = json_object_new ();
    searpc_set_object_to_ret_object (object, ret);
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
marshal_object__string_string (void *func, JsonArray *param_array, gsize *ret_len)
{
    GError *error = NULL;
    const gchar* param1 = json_array_get_string_or_null_element (param_array, 1);
    const gchar* param2 = json_array_get_string_or_null_element (param_array, 2);

    GObject* ret = ((GObject* (*)(const gchar*, const gchar*, GError **))func) (param1, param2, &error);

    JsonObject *object = json_object_new ();
    searpc_set_object_to_ret_object (object, ret);
    return searpc_marshal_set_ret_common (object, ret_len, error);
}

static void register_marshals()
{

    {
        searpc_server_register_marshal (searpc_signature_int__void(), marshal_int__void);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int(), marshal_int__int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_int(), marshal_int__int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_string(), marshal_int__int_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_string_int(), marshal_int__int_string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_string_string(), marshal_int__int_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_string_int_int(), marshal_int__int_string_int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string(), marshal_int__string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_int(), marshal_int__string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_int_string(), marshal_int__string_int_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_int_string_string(), marshal_int__string_int_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string(), marshal_int__string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_string(), marshal_int__string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_int(), marshal_int__string_string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_int_int(), marshal_int__string_string_int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_string_string(), marshal_int__string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_string_string_string(), marshal_int__string_string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_string_string_string_string(), marshal_int__string_string_string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_string_string_string_string_string_string(), marshal_int__string_string_string_string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__string_int64(), marshal_int__string_int64);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_int64(), marshal_int__int_int64);
    }

    {
        searpc_server_register_marshal (searpc_signature_int__int_string_int64(), marshal_int__int_string_int64);
    }

    {
        searpc_server_register_marshal (searpc_signature_int64__void(), marshal_int64__void);
    }

    {
        searpc_server_register_marshal (searpc_signature_int64__string(), marshal_int64__string);
    }

    {
        searpc_server_register_marshal (searpc_signature_int64__int(), marshal_int64__int);
    }

    {
        searpc_server_register_marshal (searpc_signature_int64__int_string(), marshal_int64__int_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__void(), marshal_string__void);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__int(), marshal_string__int);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string(), marshal_string__string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_int(), marshal_string__string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string(), marshal_string__string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string(), marshal_string__string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string_string(), marshal_string__string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string_string_int(), marshal_string__string_string_string_string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string_string_string(), marshal_string__string_string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string_string_string_string(), marshal_string__string_string_string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string_string_string_int(), marshal_string__string_string_string_string_string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_string__string_string_string_string_string_string_string_string_string(), marshal_string__string_string_string_string_string_string_string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__void(), marshal_objlist__void);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__int(), marshal_objlist__int);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__int_int(), marshal_objlist__int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__int_int_int(), marshal_objlist__int_int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string(), marshal_objlist__string);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_int(), marshal_objlist__string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_int_int(), marshal_objlist__string_int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_string(), marshal_objlist__string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_string_string(), marshal_objlist__string_string_string);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_string_int(), marshal_objlist__string_string_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_objlist__string_string_int_int(), marshal_objlist__string_string_int_int);
    }

    {
        searpc_server_register_marshal (searpc_signature_object__void(), marshal_object__void);
    }

    {
        searpc_server_register_marshal (searpc_signature_object__int(), marshal_object__int);
    }

    {
        searpc_server_register_marshal (searpc_signature_object__string(), marshal_object__string);
    }

    {
        searpc_server_register_marshal (searpc_signature_object__string_string(), marshal_object__string_string);
    }
}
