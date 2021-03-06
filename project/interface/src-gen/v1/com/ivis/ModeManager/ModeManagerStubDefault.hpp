/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_MODEMANAGER_Mode_Manager_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_MODEMANAGER_Mode_Manager_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/com/ivis/ModeManager/ModeManagerStub.hpp>
#include <sstream>

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

/**
 * Provides a default implementation for ModeManagerStubRemoteEvent and
 * ModeManagerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT ModeManagerStubDefault
    : public virtual ModeManagerStub {
public:
    COMMONAPI_EXPORT ModeManagerStubDefault();

    COMMONAPI_EXPORT ModeManagerStubRemoteEvent* initStubAdapter(const std::shared_ptr< ModeManagerStubAdapter> &_adapter);

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    COMMONAPI_EXPORT virtual const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo& getActiveApplicationAttribute();
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo& getActiveApplicationAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setActiveApplicationAttribute(::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo _value);
    COMMONAPI_EXPORT virtual void setActiveApplicationAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo _value);

    COMMONAPI_EXPORT virtual void requestChangeApplication(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType _app, ::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType _subApp, ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester _requester, requestChangeApplicationReply_t _reply);

    COMMONAPI_EXPORT virtual void fireResponseChangeApplicationEvent(const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeResult &_result, const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo &_currentAppInfo, const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo &_requestAppInfo, const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester &_requester);
    COMMONAPI_EXPORT virtual void fireActiveApplicationChangedEvent(const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo &_appInfo, const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester &_requester);

    
protected:
    COMMONAPI_EXPORT virtual bool trySetActiveApplicationAttribute(::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo _value);
    COMMONAPI_EXPORT virtual bool validateActiveApplicationAttributeRequestedValue(const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo &_value);
    COMMONAPI_EXPORT virtual void onRemoteActiveApplicationAttributeChanged();
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual ModeManagerStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(ModeManagerStubDefault *_defaultStub);

        COMMONAPI_EXPORT virtual bool onRemoteSetActiveApplicationAttribute(::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetActiveApplicationAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo _value);
        COMMONAPI_EXPORT virtual void onRemoteActiveApplicationAttributeChanged();


    private:
        ModeManagerStubDefault *defaultStub_;
    };
private:
    ModeManagerStubDefault::RemoteEventHandler remoteEventHandler_;

    ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationInfo activeApplicationAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace ModeManager
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_MODEMANAGER_Mode_Manager_STUB_DEFAULT
