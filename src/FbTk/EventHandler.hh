// fluxbox.cc for Fluxbox Window Manager
// Copyright (c) 2002 Henrik Kinnunen (fluxgen@linuxmail.org)
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.	IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

// $Id: EventHandler.hh,v 1.1 2002/11/26 16:01:27 fluxgen Exp $

#ifndef FBTK_EVENTHANDLER_HH
#define FBTK_EVENTHANDLER_HH

namespace FbTk {

/**
	template eventhandler
	Both return value and argument is generic.
*/
template <typename Event_T, typename Event_ret_T = void>
class EventHandler {
public:
	virtual ~EventHandler() { }

	virtual Event_ret_T handleEvent(Event_T * const) = 0;
};

};

#endif // FBTK_EVENTHANDLER_HH
