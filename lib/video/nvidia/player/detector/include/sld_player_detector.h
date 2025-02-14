#pragma once

#if defined(EXP_SLD_PLAYER_DETECTIR_LIB)
#define EXP_SLD_PLAYER_DETECTIR_CLS	__declspec(dllexport)
#else
#define EXP_SLD_PLAYER_DETECTIR_CLS	__declspec(dllimport)
#endif

#include <sld.h>

namespace solids
{
	namespace lib
	{
		namespace video
		{
			namespace nvidia
			{
				namespace player
				{

					class EXP_SLD_PLAYER_DETECTIR_CLS detector
						: public solids::lib::base
					{
						class core;
					public:
						typedef struct _context_t
						{
							int32_t width;
							int32_t height;
							_context_t(void)
								: width(-1)
								, height(-1)
							{}

							~_context_t(void)
							{}
						} context_t;

						detector(void);
						virtual ~detector(void);

						int32_t initialize(solids::lib::video::nvidia::player::detector::context_t* ctx);
						int32_t release(void);

						int32_t detect(uint8_t* input, int32_t inputStride, uint8_t** output, int32_t& outputStride);

					private:
						solids::lib::video::nvidia::player::detector::core* _core;
					};

				};
			};
		};
	};
};

