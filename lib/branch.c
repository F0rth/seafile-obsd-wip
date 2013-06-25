/* branch.c generated by valac 0.14.2, the Vala compiler
 * generated from branch.vala, do not modify */

/* compile this file with `valac --pkg posix repo.vala -C -H repo.h`*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define SEAFILE_TYPE_BRANCH (seafile_branch_get_type ())
#define SEAFILE_BRANCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAFILE_TYPE_BRANCH, SeafileBranch))
#define SEAFILE_BRANCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAFILE_TYPE_BRANCH, SeafileBranchClass))
#define SEAFILE_IS_BRANCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAFILE_TYPE_BRANCH))
#define SEAFILE_IS_BRANCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAFILE_TYPE_BRANCH))
#define SEAFILE_BRANCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAFILE_TYPE_BRANCH, SeafileBranchClass))

typedef struct _SeafileBranch SeafileBranch;
typedef struct _SeafileBranchClass SeafileBranchClass;
typedef struct _SeafileBranchPrivate SeafileBranchPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _SeafileBranch {
	GObject parent_instance;
	SeafileBranchPrivate * priv;
	gchar* _name;
	gchar* _commit_id;
	gchar* _repo_id;
};

struct _SeafileBranchClass {
	GObjectClass parent_class;
};


static gpointer seafile_branch_parent_class = NULL;

GType seafile_branch_get_type (void) G_GNUC_CONST;
enum  {
	SEAFILE_BRANCH_DUMMY_PROPERTY,
	SEAFILE_BRANCH_NAME,
	SEAFILE_BRANCH_COMMIT_ID,
	SEAFILE_BRANCH_REPO_ID
};
SeafileBranch* seafile_branch_new (void);
SeafileBranch* seafile_branch_construct (GType object_type);
const gchar* seafile_branch_get_name (SeafileBranch* self);
void seafile_branch_set_name (SeafileBranch* self, const gchar* value);
const gchar* seafile_branch_get_commit_id (SeafileBranch* self);
void seafile_branch_set_commit_id (SeafileBranch* self, const gchar* value);
const gchar* seafile_branch_get_repo_id (SeafileBranch* self);
void seafile_branch_set_repo_id (SeafileBranch* self, const gchar* value);
static void seafile_branch_finalize (GObject* obj);
static void _vala_seafile_branch_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_seafile_branch_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


SeafileBranch* seafile_branch_construct (GType object_type) {
	SeafileBranch * self = NULL;
	self = (SeafileBranch*) g_object_new (object_type, NULL);
	return self;
}


SeafileBranch* seafile_branch_new (void) {
	return seafile_branch_construct (SEAFILE_TYPE_BRANCH);
}


const gchar* seafile_branch_get_name (SeafileBranch* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->_name;
	result = _tmp0_;
	return result;
}


void seafile_branch_set_name (SeafileBranch* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->_name);
	self->_name = _tmp1_;
	g_object_notify ((GObject *) self, "name");
}


const gchar* seafile_branch_get_commit_id (SeafileBranch* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->_commit_id;
	result = _tmp0_;
	return result;
}


void seafile_branch_set_commit_id (SeafileBranch* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->_commit_id);
	self->_commit_id = _tmp1_;
	g_object_notify ((GObject *) self, "commit-id");
}


const gchar* seafile_branch_get_repo_id (SeafileBranch* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->_repo_id;
	result = _tmp0_;
	return result;
}


void seafile_branch_set_repo_id (SeafileBranch* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->_repo_id);
	self->_repo_id = _tmp1_;
	g_object_notify ((GObject *) self, "repo-id");
}


static void seafile_branch_class_init (SeafileBranchClass * klass) {
	seafile_branch_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->get_property = _vala_seafile_branch_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_seafile_branch_set_property;
	G_OBJECT_CLASS (klass)->finalize = seafile_branch_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SEAFILE_BRANCH_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SEAFILE_BRANCH_COMMIT_ID, g_param_spec_string ("commit-id", "commit-id", "commit-id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SEAFILE_BRANCH_REPO_ID, g_param_spec_string ("repo-id", "repo-id", "repo-id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void seafile_branch_instance_init (SeafileBranch * self) {
}


static void seafile_branch_finalize (GObject* obj) {
	SeafileBranch * self;
	self = SEAFILE_BRANCH (obj);
	_g_free0 (self->_name);
	_g_free0 (self->_commit_id);
	_g_free0 (self->_repo_id);
	G_OBJECT_CLASS (seafile_branch_parent_class)->finalize (obj);
}


GType seafile_branch_get_type (void) {
	static volatile gsize seafile_branch_type_id__volatile = 0;
	if (g_once_init_enter (&seafile_branch_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SeafileBranchClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) seafile_branch_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SeafileBranch), 0, (GInstanceInitFunc) seafile_branch_instance_init, NULL };
		GType seafile_branch_type_id;
		seafile_branch_type_id = g_type_register_static (G_TYPE_OBJECT, "SeafileBranch", &g_define_type_info, 0);
		g_once_init_leave (&seafile_branch_type_id__volatile, seafile_branch_type_id);
	}
	return seafile_branch_type_id__volatile;
}


static void _vala_seafile_branch_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SeafileBranch * self;
	self = SEAFILE_BRANCH (object);
	switch (property_id) {
		case SEAFILE_BRANCH_NAME:
		g_value_set_string (value, seafile_branch_get_name (self));
		break;
		case SEAFILE_BRANCH_COMMIT_ID:
		g_value_set_string (value, seafile_branch_get_commit_id (self));
		break;
		case SEAFILE_BRANCH_REPO_ID:
		g_value_set_string (value, seafile_branch_get_repo_id (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_seafile_branch_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SeafileBranch * self;
	self = SEAFILE_BRANCH (object);
	switch (property_id) {
		case SEAFILE_BRANCH_NAME:
		seafile_branch_set_name (self, g_value_get_string (value));
		break;
		case SEAFILE_BRANCH_COMMIT_ID:
		seafile_branch_set_commit_id (self, g_value_get_string (value));
		break;
		case SEAFILE_BRANCH_REPO_ID:
		seafile_branch_set_repo_id (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



