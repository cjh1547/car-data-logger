/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_MODEMANAGER_Mode_Manager_DBUS_PROXY_HPP_
#define V1_COM_IVIS_MODEMANAGER_Mode_Manager_DBUS_PROXY_HPP_

#include <v1/com/ivis/ModeManager/ModeManagerProxyBase.hpp>
#include "v1/com/ivis/ModeManager/ModeManagerDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusAttribute.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif

namespace v1 {
namespace com {
namespace ivis {
namespace ModeManager {

class ModeManagerDBusProxy
    : virtual public ModeManagerProxyBase,
      virtual public CommonAPI::DBus::DBusProxy {
public:
    ModeManagerDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~ModeManagerDBusProxy() { }

    virtual ActiveApplicationAttribute& getActiveApplicationAttribute();

    virtual ResponseChangeApplicationEvent& getResponseChangeApplicationEvent();
    virtual ActiveApplicationChangedEvent& getActiveApplicationChangedEvent();

    virtual void requestChangeApplication(const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType &_app, const ::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType &_subApp, const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester &_requester, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestChangeApplicationAsync(const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType &_app, const ::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType &_subApp, const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester &_requester, RequestChangeApplicationAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:

    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<ActiveApplicationAttribute, ::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t>> activeApplication_;

    CommonAPI::DBus::DBusEvent<ResponseChangeApplicationEvent, CommonAPI::Deployable< ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo, ::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t >, CommonAPI::Deployable< ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo, ::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t >, CommonAPI::Deployable< ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester, CommonAPI::EmptyDeployment >> responseChangeApplication_;
    CommonAPI::DBus::DBusEvent<ActiveApplicationChangedEvent, CommonAPI::Deployable< ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo, ::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t >, CommonAPI::Deployable< ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester, CommonAPI::EmptyDeployment >> activeApplicationChanged_;

};

} // namespace ModeManager
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_MODEMANAGER_Mode_Manager_DBUS_PROXY_HPP_

