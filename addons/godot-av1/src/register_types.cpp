#include "register_types.h"

#include <godot_cpp/classes/engine.hpp>

using namespace godot;

void initialize_godot_av1_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

void uninitialize_godot_av1_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

extern "C" {
	// Initialization.
	GDExtensionBool GDE_EXPORT godot_av1_library_init(GDExtensionInterface const* p_interface, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization* r_initialization) {
		GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

		init_obj.register_initializer(initialize_godot_av1_types);
		init_obj.register_terminator(uninitialize_godot_av1_types);
		init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

		return init_obj.init();
	}
}