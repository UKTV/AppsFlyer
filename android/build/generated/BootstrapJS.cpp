#ifndef KROLL_NATIVES_H
#define KROLL_NATIVES_H

#include <stdint.h>

namespace titanium {

	const char bootstrap_native[] = { 47, 42, 42, 10, 32, 42, 32, 65, 112, 112, 99, 101, 108, 101, 114, 97, 116, 111, 114, 32, 84, 105, 116, 97, 110, 105, 117, 109, 32, 77, 111, 98, 105, 108, 101, 10, 32, 42, 32, 67, 111, 112, 121, 114, 105, 103, 104, 116, 32, 40, 99, 41, 32, 50, 48, 49, 49, 32, 98, 121, 32, 65, 112, 112, 99, 101, 108, 101, 114, 97, 116, 111, 114, 44, 32, 73, 110, 99, 46, 32, 65, 108, 108, 32, 82, 105, 103, 104, 116, 115, 32, 82, 101, 115, 101, 114, 118, 101, 100, 46, 10, 32, 42, 32, 76, 105, 99, 101, 110, 115, 101, 100, 32, 117, 110, 100, 101, 114, 32, 116, 104, 101, 32, 116, 101, 114, 109, 115, 32, 111, 102, 32, 116, 104, 101, 32, 65, 112, 97, 99, 104, 101, 32, 80, 117, 98, 108, 105, 99, 32, 76, 105, 99, 101, 110, 115, 101, 10, 32, 42, 32, 80, 108, 101, 97, 115, 101, 32, 115, 101, 101, 32, 116, 104, 101, 32, 76, 73, 67, 69, 78, 83, 69, 32, 105, 110, 99, 108, 117, 100, 101, 100, 32, 119, 105, 116, 104, 32, 116, 104, 105, 115, 32, 100, 105, 115, 116, 114, 105, 98, 117, 116, 105, 111, 110, 32, 102, 111, 114, 32, 100, 101, 116, 97, 105, 108, 115, 46, 10, 32, 42, 10, 32, 42, 32, 87, 97, 114, 110, 105, 110, 103, 58, 32, 84, 104, 105, 115, 32, 102, 105, 108, 101, 32, 105, 115, 32, 71, 69, 78, 69, 82, 65, 84, 69, 68, 44, 32, 97, 110, 100, 32, 115, 104, 111, 117, 108, 100, 32, 110, 111, 116, 32, 98, 101, 32, 109, 111, 100, 105, 102, 105, 101, 100, 10, 32, 42, 47, 10, 118, 97, 114, 32, 98, 111, 111, 116, 115, 116, 114, 97, 112, 32, 61, 32, 107, 114, 111, 108, 108, 46, 78, 97, 116, 105, 118, 101, 77, 111, 100, 117, 108, 101, 46, 114, 101, 113, 117, 105, 114, 101, 40, 34, 98, 111, 111, 116, 115, 116, 114, 97, 112, 34, 41, 44, 10, 9, 105, 110, 118, 111, 107, 101, 114, 32, 61, 32, 107, 114, 111, 108, 108, 46, 78, 97, 116, 105, 118, 101, 77, 111, 100, 117, 108, 101, 46, 114, 101, 113, 117, 105, 114, 101, 40, 34, 105, 110, 118, 111, 107, 101, 114, 34, 41, 44, 10, 9, 84, 105, 116, 97, 110, 105, 117, 109, 32, 61, 32, 107, 114, 111, 108, 108, 46, 98, 105, 110, 100, 105, 110, 103, 40, 34, 84, 105, 116, 97, 110, 105, 117, 109, 34, 41, 46, 84, 105, 116, 97, 110, 105, 117, 109, 59, 10, 10, 102, 117, 110, 99, 116, 105, 111, 110, 32, 109, 111, 100, 117, 108, 101, 66, 111, 111, 116, 115, 116, 114, 97, 112, 40, 109, 111, 100, 117, 108, 101, 66, 105, 110, 100, 105, 110, 103, 41, 32, 123, 10, 9, 102, 117, 110, 99, 116, 105, 111, 110, 32, 108, 97, 122, 121, 71, 101, 116, 40, 111, 98, 106, 101, 99, 116, 44, 32, 98, 105, 110, 100, 105, 110, 103, 44, 32, 110, 97, 109, 101, 44, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 41, 32, 123, 10, 9, 9, 114, 101, 116, 117, 114, 110, 32, 98, 111, 111, 116, 115, 116, 114, 97, 112, 46, 108, 97, 122, 121, 71, 101, 116, 40, 111, 98, 106, 101, 99, 116, 44, 32, 98, 105, 110, 100, 105, 110, 103, 44, 10, 9, 9, 9, 110, 97, 109, 101, 44, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 44, 32, 109, 111, 100, 117, 108, 101, 66, 105, 110, 100, 105, 110, 103, 46, 103, 101, 116, 66, 105, 110, 100, 105, 110, 103, 41, 59, 10, 9, 125, 10, 10, 9, 118, 97, 114, 32, 109, 111, 100, 117, 108, 101, 32, 61, 32, 109, 111, 100, 117, 108, 101, 66, 105, 110, 100, 105, 110, 103, 46, 103, 101, 116, 66, 105, 110, 100, 105, 110, 103, 40, 34, 99, 111, 46, 117, 107, 46, 100, 101, 118, 112, 117, 108, 115, 101, 46, 97, 112, 112, 115, 102, 108, 121, 101, 114, 46, 65, 112, 112, 115, 70, 108, 121, 101, 114, 77, 111, 100, 117, 108, 101, 34, 41, 91, 34, 65, 112, 112, 115, 70, 108, 121, 101, 114, 34, 93, 59, 10, 9, 118, 97, 114, 32, 105, 110, 118, 111, 99, 97, 116, 105, 111, 110, 65, 80, 73, 115, 32, 61, 32, 109, 111, 100, 117, 108, 101, 46, 105, 110, 118, 111, 99, 97, 116, 105, 111, 110, 65, 80, 73, 115, 32, 61, 32, 91, 93, 59, 10, 9, 109, 111, 100, 117, 108, 101, 46, 97, 112, 105, 78, 97, 109, 101, 32, 61, 32, 34, 65, 112, 112, 115, 70, 108, 121, 101, 114, 34, 59, 10, 10, 9, 102, 117, 110, 99, 116, 105, 111, 110, 32, 97, 100, 100, 73, 110, 118, 111, 99, 97, 116, 105, 111, 110, 65, 80, 73, 40, 109, 111, 100, 117, 108, 101, 44, 32, 109, 111, 100, 117, 108, 101, 78, 97, 109, 101, 115, 112, 97, 99, 101, 44, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 44, 32, 97, 112, 105, 41, 32, 123, 10, 9, 9, 105, 110, 118, 111, 99, 97, 116, 105, 111, 110, 65, 80, 73, 115, 46, 112, 117, 115, 104, 40, 123, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 58, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 44, 32, 97, 112, 105, 58, 32, 97, 112, 105, 32, 125, 41, 59, 10, 9, 125, 10, 10, 9, 97, 100, 100, 73, 110, 118, 111, 99, 97, 116, 105, 111, 110, 65, 80, 73, 40, 109, 111, 100, 117, 108, 101, 44, 32, 34, 65, 112, 112, 115, 70, 108, 121, 101, 114, 34, 44, 32, 34, 65, 112, 112, 115, 70, 108, 121, 101, 114, 34, 44, 32, 34, 99, 114, 101, 97, 116, 101, 69, 120, 97, 109, 112, 108, 101, 34, 41, 59, 10, 9, 9, 105, 102, 32, 40, 33, 40, 34, 95, 95, 112, 114, 111, 112, 101, 114, 116, 105, 101, 115, 68, 101, 102, 105, 110, 101, 100, 95, 95, 34, 32, 105, 110, 32, 109, 111, 100, 117, 108, 101, 41, 41, 32, 123, 79, 98, 106, 101, 99, 116, 46, 100, 101, 102, 105, 110, 101, 80, 114, 111, 112, 101, 114, 116, 105, 101, 115, 40, 109, 111, 100, 117, 108, 101, 44, 32, 123, 10, 34, 69, 120, 97, 109, 112, 108, 101, 34, 58, 32, 123, 10, 103, 101, 116, 58, 32, 102, 117, 110, 99, 116, 105, 111, 110, 40, 41, 32, 123, 10, 118, 97, 114, 32, 69, 120, 97, 109, 112, 108, 101, 32, 61, 32, 32, 108, 97, 122, 121, 71, 101, 116, 40, 116, 104, 105, 115, 44, 32, 34, 99, 111, 46, 117, 107, 46, 100, 101, 118, 112, 117, 108, 115, 101, 46, 97, 112, 112, 115, 102, 108, 121, 101, 114, 46, 69, 120, 97, 109, 112, 108, 101, 80, 114, 111, 120, 121, 34, 44, 32, 34, 69, 120, 97, 109, 112, 108, 101, 34, 44, 32, 34, 69, 120, 97, 109, 112, 108, 101, 34, 41, 59, 10, 114, 101, 116, 117, 114, 110, 32, 69, 120, 97, 109, 112, 108, 101, 59, 10, 125, 44, 10, 99, 111, 110, 102, 105, 103, 117, 114, 97, 98, 108, 101, 58, 32, 116, 114, 117, 101, 10, 125, 44, 10, 10, 125, 41, 59, 10, 109, 111, 100, 117, 108, 101, 46, 99, 111, 110, 115, 116, 114, 117, 99, 116, 111, 114, 46, 112, 114, 111, 116, 111, 116, 121, 112, 101, 46, 99, 114, 101, 97, 116, 101, 69, 120, 97, 109, 112, 108, 101, 32, 61, 32, 102, 117, 110, 99, 116, 105, 111, 110, 40, 41, 32, 123, 10, 114, 101, 116, 117, 114, 110, 32, 110, 101, 119, 32, 109, 111, 100, 117, 108, 101, 91, 34, 69, 120, 97, 109, 112, 108, 101, 34, 93, 40, 97, 114, 103, 117, 109, 101, 110, 116, 115, 41, 59, 10, 125, 10, 125, 10, 109, 111, 100, 117, 108, 101, 46, 95, 95, 112, 114, 111, 112, 101, 114, 116, 105, 101, 115, 68, 101, 102, 105, 110, 101, 100, 95, 95, 32, 61, 32, 116, 114, 117, 101, 59, 10, 114, 101, 116, 117, 114, 110, 32, 109, 111, 100, 117, 108, 101, 59, 10, 10, 125, 10, 101, 120, 112, 111, 114, 116, 115, 46, 98, 111, 111, 116, 115, 116, 114, 97, 112, 32, 61, 32, 109, 111, 100, 117, 108, 101, 66, 111, 111, 116, 115, 116, 114, 97, 112, 59, 10, 0 };

	struct _native {
		const char* name;
		const char* source;
		size_t source_length;
	};

	static const struct _native natives[] = {

		{ "bootstrap", bootstrap_native, sizeof(bootstrap_native) - 1 },

		{ NULL, NULL, 0 } /* sentinel */

	};

}
#endif
