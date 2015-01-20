/*
* Copyright (C) 2012-2015 OUYA, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __CALLBACKS_CONTENT_SAVE_H__
#define __CALLBACKS_CONTENT_SAVE_H__

#include "OuyaSDK_OuyaMod.h"

#include <string>
#include <vector>

class CallbacksContentSave
{
public:

	virtual void OnError(tv_ouya_console_api_content_OuyaMod::OuyaMod ouyaMod, int code, const std::string& reason);

	virtual void OnSuccess(tv_ouya_console_api_content_OuyaMod::OuyaMod ouyaMod);
};

#endif