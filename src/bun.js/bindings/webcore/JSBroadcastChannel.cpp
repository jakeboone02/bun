/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSBroadcastChannel.h"

#include "ActiveDOMObject.h"
#include "EventNames.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "IDLTypes.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructor.h"
#include "JSDOMConvertAny.h"
#include "JSDOMConvertBase.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "JSEventListener.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>
#include "ErrorCode.h"
#include <JavaScriptCore/PropertyNameArray.h>

namespace WebCore {
using namespace JSC;

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_postMessage);
static JSC_DECLARE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_close);
static JSC_DECLARE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_ref);
static JSC_DECLARE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_unref);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsBroadcastChannelConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsBroadcastChannel_name);
static JSC_DECLARE_CUSTOM_GETTER(jsBroadcastChannel_onmessage);
static JSC_DECLARE_CUSTOM_SETTER(setJSBroadcastChannel_onmessage);
static JSC_DECLARE_CUSTOM_GETTER(jsBroadcastChannel_onmessageerror);
static JSC_DECLARE_CUSTOM_SETTER(setJSBroadcastChannel_onmessageerror);

class JSBroadcastChannelPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSBroadcastChannelPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSBroadcastChannelPrototype* ptr = new (NotNull, JSC::allocateCell<JSBroadcastChannelPrototype>(vm)) JSBroadcastChannelPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSBroadcastChannelPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSBroadcastChannelPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&, JSC::JSGlobalObject* globalObject);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSBroadcastChannelPrototype, JSBroadcastChannelPrototype::Base);

using JSBroadcastChannelDOMConstructor = JSDOMConstructor<JSBroadcastChannel>;

template<> JSC::EncodedJSValue JSC_HOST_CALL_ATTRIBUTES JSBroadcastChannelDOMConstructor::construct(JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* castedThis = jsCast<JSBroadcastChannelDOMConstructor*>(callFrame->jsCallee());
    ASSERT(castedThis);
    if (callFrame->argumentCount() < 1) [[unlikely]]
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    auto* context = castedThis->scriptExecutionContext();
    if (!context) [[unlikely]]
        return throwConstructorScriptExecutionContextUnavailableError(*lexicalGlobalObject, throwScope, "BroadcastChannel"_s);
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    auto object = BroadcastChannel::create(*context, WTFMove(name));
    if constexpr (IsExceptionOr<decltype(object)>)
        RETURN_IF_EXCEPTION(throwScope, {});
    static_assert(TypeOrExceptionOrUnderlyingType<decltype(object)>::isRef);
    auto jsValue = toJSNewlyCreated<IDLInterface<BroadcastChannel>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, WTFMove(object));
    if constexpr (IsExceptionOr<decltype(object)>)
        RETURN_IF_EXCEPTION(throwScope, {});
    setSubclassStructureIfNeeded<BroadcastChannel>(lexicalGlobalObject, callFrame, asObject(jsValue));
    RETURN_IF_EXCEPTION(throwScope, {});
    return JSValue::encode(jsValue);
}
JSC_ANNOTATE_HOST_FUNCTION(JSBroadcastChannelDOMConstructorConstruct, JSBroadcastChannelDOMConstructor::construct);

template<> const ClassInfo JSBroadcastChannelDOMConstructor::s_info = { "BroadcastChannel"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSBroadcastChannelDOMConstructor) };

template<> JSValue JSBroadcastChannelDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSEventTarget::getConstructor(vm, &globalObject);
}

template<> void JSBroadcastChannelDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(1), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "BroadcastChannel"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSBroadcastChannel::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSBroadcastChannelPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsBroadcastChannelConstructor, 0 } },
    { "name"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsBroadcastChannel_name, 0 } },
    { "onmessage"_s, JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsBroadcastChannel_onmessage, setJSBroadcastChannel_onmessage } },
    { "onmessageerror"_s, JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsBroadcastChannel_onmessageerror, setJSBroadcastChannel_onmessageerror } },
    { "postMessage"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsBroadcastChannelPrototypeFunction_postMessage, 1 } },
    { "close"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsBroadcastChannelPrototypeFunction_close, 0 } },
    { "ref"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsBroadcastChannelPrototypeFunction_ref, 0 } },
    { "unref"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsBroadcastChannelPrototypeFunction_unref, 0 } },
};

const ClassInfo JSBroadcastChannelPrototype::s_info = { "BroadcastChannel"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSBroadcastChannelPrototype) };

JSC_DEFINE_HOST_FUNCTION(jsBroadcastChannelPrototype_inspectCustom, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::CallFrame* callFrame))
{
    auto& vm = lexicalGlobalObject->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* globalObject = defaultGlobalObject(lexicalGlobalObject);

    auto* channel = JSBroadcastChannel::toWrapped(vm, callFrame->thisValue());
    if (!channel) {
        return Bun::ERR::INVALID_THIS(throwScope, lexicalGlobalObject, "BroadcastChannel"_s);
    }

    JSValue depthValue = callFrame->argument(0);
    JSValue optionsValue = callFrame->argument(1);

    auto depth = depthValue.toNumber(lexicalGlobalObject);
    RETURN_IF_EXCEPTION(throwScope, {});
    if (depth < 0) {
        return JSValue::encode(jsNontrivialString(vm, "BroadcastChannel"_s));
    }

    if (!depthValue.isUndefinedOrNull()) {
        depthValue = jsNumber(depth - 1);
    }

    JSObject* options = optionsValue.toObject(lexicalGlobalObject);
    RETURN_IF_EXCEPTION(throwScope, {});
    PropertyNameArray optionsArray(vm, PropertyNameMode::StringsAndSymbols, PrivateSymbolMode::Exclude);
    options->getPropertyNames(lexicalGlobalObject, optionsArray, DontEnumPropertiesMode::Exclude);
    RETURN_IF_EXCEPTION(throwScope, {});

    JSObject* newOptions = constructEmptyObject(lexicalGlobalObject);
    for (size_t i = 0; i < optionsArray.size(); i++) {
        auto name = optionsArray[i];

        JSValue value = options->get(lexicalGlobalObject, name);
        RETURN_IF_EXCEPTION(throwScope, {});

        newOptions->putDirect(vm, name, value, 0);
        RETURN_IF_EXCEPTION(throwScope, {});
    }

    PutPropertySlot slot(newOptions);
    newOptions->put(newOptions, lexicalGlobalObject, Identifier::fromString(vm, "depth"_s), depthValue, slot);
    RETURN_IF_EXCEPTION(throwScope, {});

    JSObject* inputObj = constructEmptyObject(lexicalGlobalObject);
    inputObj->putDirect(vm, vm.propertyNames->name, jsString(vm, channel->name()), 0);
    inputObj->putDirect(vm, Identifier::fromString(vm, "active"_s), jsBoolean(!channel->isClosed()), 0);

    JSFunction* utilInspect = globalObject->utilInspectFunction();
    RETURN_IF_EXCEPTION(throwScope, {});
    auto callData = JSC::getCallData(utilInspect);
    MarkedArgumentBuffer arguments;
    arguments.append(inputObj);
    arguments.append(newOptions);

    auto inspectResult = JSC::profiledCall(globalObject, ProfilingReason::API, utilInspect, callData, inputObj, arguments);
    RETURN_IF_EXCEPTION(throwScope, {});

    auto* inspectString = inspectResult.toString(lexicalGlobalObject);
    RETURN_IF_EXCEPTION(throwScope, {});

    auto inspectStringView = inspectString->view(lexicalGlobalObject);
    RETURN_IF_EXCEPTION(throwScope, {});

    JSValue result = jsString(vm, makeString("BroadcastChannel "_s, inspectStringView.data));

    return JSValue::encode(result);
}

void JSBroadcastChannelPrototype::finishCreation(VM& vm, JSGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSBroadcastChannel::info(), JSBroadcastChannelPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
    BunBuiltinNames& builtinNames = WebCore::builtinNames(vm);
    putDirectNativeFunction(vm, globalObject, builtinNames.inspectCustomPublicName(), 2, jsBroadcastChannelPrototype_inspectCustom, ImplementationVisibility::Public, NoIntrinsic, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontDelete | 0);
}

const ClassInfo JSBroadcastChannel::s_info = { "BroadcastChannel"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSBroadcastChannel) };

JSBroadcastChannel::JSBroadcastChannel(Structure* structure, JSDOMGlobalObject& globalObject, Ref<BroadcastChannel>&& impl)
    : JSEventTarget(structure, globalObject, WTFMove(impl))
{
}

// static_assert(std::is_base_of<ActiveDOMObject, BroadcastChannel>::value, "Interface is marked as [ActiveDOMObject] but implementation class does not subclass ActiveDOMObject.");

JSObject* JSBroadcastChannel::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSBroadcastChannelPrototype::createStructure(vm, &globalObject, JSEventTarget::prototype(vm, globalObject));
    structure->setMayBePrototype(true);
    return JSBroadcastChannelPrototype::create(vm, &globalObject, structure);
}

JSObject* JSBroadcastChannel::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSBroadcastChannel>(vm, globalObject);
}

JSValue JSBroadcastChannel::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBroadcastChannelDOMConstructor, DOMConstructorID::BroadcastChannel>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsBroadcastChannelConstructor, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName))
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSBroadcastChannelPrototype*>(JSValue::decode(thisValue));
    if (!prototype) [[unlikely]]
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSBroadcastChannel::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSValue jsBroadcastChannel_nameGetter(JSGlobalObject& lexicalGlobalObject, JSBroadcastChannel& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDOMString>(lexicalGlobalObject, throwScope, impl.name())));
}

JSC_DEFINE_CUSTOM_GETTER(jsBroadcastChannel_name, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSBroadcastChannel>::get<jsBroadcastChannel_nameGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsBroadcastChannel_onmessageGetter(JSGlobalObject& lexicalGlobalObject, JSBroadcastChannel& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return eventHandlerAttribute(thisObject.wrapped(), eventNames().messageEvent, worldForDOMObject(thisObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsBroadcastChannel_onmessage, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSBroadcastChannel>::get<jsBroadcastChannel_onmessageGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline bool setJSBroadcastChannel_onmessageSetter(JSGlobalObject& lexicalGlobalObject, JSBroadcastChannel& thisObject, JSValue value)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    UNUSED_PARAM(vm);
    setEventHandlerAttribute<JSEventListener>(thisObject.wrapped(), eventNames().messageEvent, value, thisObject);
    vm.writeBarrier(&thisObject, value);
    ensureStillAliveHere(value);

    return true;
}

JSC_DEFINE_CUSTOM_SETTER(setJSBroadcastChannel_onmessage, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, JSC::EncodedJSValue encodedValue, PropertyName attributeName))
{
    return IDLAttribute<JSBroadcastChannel>::set<setJSBroadcastChannel_onmessageSetter>(*lexicalGlobalObject, thisValue, encodedValue, attributeName);
}

static inline JSValue jsBroadcastChannel_onmessageerrorGetter(JSGlobalObject& lexicalGlobalObject, JSBroadcastChannel& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return eventHandlerAttribute(thisObject.wrapped(), eventNames().messageerrorEvent, worldForDOMObject(thisObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsBroadcastChannel_onmessageerror, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSBroadcastChannel>::get<jsBroadcastChannel_onmessageerrorGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline bool setJSBroadcastChannel_onmessageerrorSetter(JSGlobalObject& lexicalGlobalObject, JSBroadcastChannel& thisObject, JSValue value)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    UNUSED_PARAM(vm);
    setEventHandlerAttribute<JSEventListener>(thisObject.wrapped(), eventNames().messageerrorEvent, value, thisObject);
    vm.writeBarrier(&thisObject, value);
    ensureStillAliveHere(value);

    return true;
}

JSC_DEFINE_CUSTOM_SETTER(setJSBroadcastChannel_onmessageerror, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, JSC::EncodedJSValue encodedValue, PropertyName attributeName))
{
    return IDLAttribute<JSBroadcastChannel>::set<setJSBroadcastChannel_onmessageerrorSetter>(*lexicalGlobalObject, thisValue, encodedValue, attributeName);
}

static inline JSC::EncodedJSValue jsBroadcastChannelPrototypeFunction_postMessageBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSBroadcastChannel>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (callFrame->argumentCount() < 1) [[unlikely]]
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto message = convert<IDLAny>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.postMessage(*jsCast<JSDOMGlobalObject*>(lexicalGlobalObject), WTFMove(message)); })));
}

JSC_DEFINE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_postMessage, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSBroadcastChannel>::call<jsBroadcastChannelPrototypeFunction_postMessageBody>(*lexicalGlobalObject, *callFrame, "postMessage");
}

static inline JSC::EncodedJSValue jsBroadcastChannelPrototypeFunction_closeBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSBroadcastChannel>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    impl.jsUnref(lexicalGlobalObject);
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.close(); })));
}

JSC_DEFINE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_close, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSBroadcastChannel>::call<jsBroadcastChannelPrototypeFunction_closeBody>(*lexicalGlobalObject, *callFrame, "close");
}

static inline JSC::EncodedJSValue jsBroadcastChannelPrototypeFunction_refBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSBroadcastChannel>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.jsRef(lexicalGlobalObject); })));
}

JSC_DEFINE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_ref, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSBroadcastChannel>::call<jsBroadcastChannelPrototypeFunction_refBody>(*lexicalGlobalObject, *callFrame, "ref");
}

static inline JSC::EncodedJSValue jsBroadcastChannelPrototypeFunction_unrefBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSBroadcastChannel>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    impl.jsUnref(lexicalGlobalObject);
    RELEASE_AND_RETURN(throwScope, JSValue::encode(castedThis));
}

JSC_DEFINE_HOST_FUNCTION(jsBroadcastChannelPrototypeFunction_unref, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSBroadcastChannel>::call<jsBroadcastChannelPrototypeFunction_unrefBody>(*lexicalGlobalObject, *callFrame, "unref");
}

JSC::GCClient::IsoSubspace* JSBroadcastChannel::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSBroadcastChannel, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForBroadcastChannel.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForBroadcastChannel = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForBroadcastChannel.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForBroadcastChannel = std::forward<decltype(space)>(space); });
}

void JSBroadcastChannel::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSBroadcastChannel*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

bool JSBroadcastChannelOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, ASCIILiteral* reason)
{
    auto* jsBroadcastChannel = jsCast<JSBroadcastChannel*>(handle.slot()->asCell());
    auto& wrapped = jsBroadcastChannel->wrapped();
    if (!wrapped.isContextStopped() && wrapped.hasPendingActivity()) {
        if (reason) [[unlikely]]
            *reason = "ActiveDOMObject with pending activity"_s;
        return true;
    }
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSBroadcastChannelOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsBroadcastChannel = static_cast<JSBroadcastChannel*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsBroadcastChannel->wrapped(), jsBroadcastChannel);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable : 4483)
extern "C" {
extern void (*const __identifier("??_7BroadcastChannel@WebCore@@6B@")[])();
}
#else
extern "C" {
extern void* _ZTVN7WebCore16BroadcastChannelE[];
}
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<BroadcastChannel>&& impl)
{

    if constexpr (std::is_polymorphic_v<BroadcastChannel>) {
#if ENABLE(BINDING_INTEGRITY)
        // const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7BroadcastChannel@WebCore@@6B@");
#else
        // void* expectedVTablePointer = &_ZTVN7WebCore16BroadcastChannelE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // BroadcastChannel has subclasses. If BroadcastChannel has subclasses that get passed
        // to toJS() we currently require BroadcastChannel you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        // RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<BroadcastChannel>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, BroadcastChannel& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

BroadcastChannel* JSBroadcastChannel::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSBroadcastChannel*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
