#pragma once

#include <SDL.h>

#include <Nexus/Math/Rect.h>
#include <Nexus/Math/FloatRect.h>
#include <Nexus/Math/Color.h>

namespace Nexus {

	class StateRenderer {
	public:
		StateRenderer() {}
		~StateRenderer() {}

		void Rect(Rect* rect, Color color);
		void Rect(FloatRect* rect, Color color);

		void DrawColor(Color color);
	};

}
