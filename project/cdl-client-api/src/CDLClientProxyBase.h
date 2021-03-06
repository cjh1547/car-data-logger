/*
 * Copyright (C) 2016, IVIS
 *
 * This file is part of GENIVI Project CDL - Car Data Logger.
 *
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License (MPL), v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * For further information see http://www.genivi.org/.
 */

/*!
 * \author Seung-Hyun Yun <shyun@ivisolution.com>
 *
 * \copyright Copyright (c) 2016, IVIS \n
 * License MPL-2.0: Mozilla Public License version 2.0 http://mozilla.org/MPL/2.0/.
 *
 * \file CDLClientProxyBase.h
*/

#ifndef CDLCLIENTPROXYBASE_H
#define CDLCLIENTPROXYBASE_H

#include "cdl/CDLClientAPIDefine.h"

class ICDLClientAPI
{
public:
    ICDLClientAPI();

    // store data to CDL Daemon
    virtual CDL::CDLError storeData(std::string domain, std::string subDomain, std::string id, CDL::CDLData data) = 0;

    // register callback function for CDL Data update notification
    virtual CDL::CDLError registerNotifyCallback(CDL::notifyCallback callback) = 0;

    virtual void onCDLDataEvent(std::string domain, std::string subDomain, std::string id, CDL::CDLData data) = 0;

protected:
    CDL::notifyCallback fireCDLDataCallback;
};

#endif // CDLCLIENTPROXYBASE_H
