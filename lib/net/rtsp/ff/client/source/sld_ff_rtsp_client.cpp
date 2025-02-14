#include "sld_ff_rtsp_client.h"
#include "ff_rtsp_client.h"

solids::lib::net::rtsp::ff::client::client(void)
	: _core(nullptr)
{
	_core = new solids::lib::net::rtsp::ff::client::core(this);
}

solids::lib::net::rtsp::ff::client::~client(void)
{
	if (_core)
	{
		delete _core;
		_core = nullptr;
	}
}

int32_t solids::lib::net::rtsp::ff::client::play(const char * url, int32_t transport, int32_t stimeout)
{
	return _core->play(url, transport, stimeout);
}

int32_t solids::lib::net::rtsp::ff::client::stop(void)
{
	return _core->stop();
}

void solids::lib::net::rtsp::ff::client::on_begin_video(int32_t codec, uint8_t * extradata, int32_t extradata_size, int32_t width, int32_t height, int32_t fps)
{

}

void solids::lib::net::rtsp::ff::client::on_recv_video(uint8_t * bytes, int32_t nbytes, long long pts, long long duration)
{

}

void solids::lib::net::rtsp::ff::client::on_end_video(void)
{

}

void solids::lib::net::rtsp::ff::client::on_begin_audio(int32_t codec, uint8_t * extradata, int32_t extradata_size, int32_t samplerate, int32_t channels)
{

}

void solids::lib::net::rtsp::ff::client::on_recv_audio(uint8_t * bytes, int32_t nbytes, long long pts, long long duration)
{

}

void solids::lib::net::rtsp::ff::client::on_end_audio(void)
{

}