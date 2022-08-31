#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw
struct _GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum
struct _GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
struct _GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize
struct _GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
struct _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
struct _GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty
struct _GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync
struct _GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel
struct _GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass
struct _GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole
struct _GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty
struct _GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop
struct _IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess
struct _IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected
struct _IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate
struct _PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent
struct _PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose
struct _PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus
struct _ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose
struct _ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility
struct _SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED;
// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse
struct _TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedControllerRole_tAEC05F979DA3905AD8A13EBD17BF37403FDD925B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedDeviceClass_t830B9950ED96F24CC0B816BE892E22E18DB3AD2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackingUniverseOrigin_tE68C3FBA94700E28C43C1F47BDCE669104ED44E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EVREye_t7E76ABC02C5CB4AF436EA4597B89B2DBAB5C9B6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t
struct HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E 
{
public:
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t::m11
	float ___m11_11;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/HmdVector3_t
struct HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC 
{
public:
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdVector3_t::v0
	float ___v0_0;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdVector3_t::v1
	float ___v1_1;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/HmdVector3_t::v2
	float ___v2_2;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC, ___v0_0)); }
	inline float get_v0_0() const { return ___v0_0; }
	inline float* get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(float value)
	{
		___v0_0 = value;
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC, ___v1_1)); }
	inline float get_v1_1() const { return ___v1_1; }
	inline float* get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(float value)
	{
		___v1_1 = value;
	}

	inline static int32_t get_offset_of_v2_2() { return static_cast<int32_t>(offsetof(HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC, ___v2_2)); }
	inline float get_v2_2() const { return ___v2_2; }
	inline float* get_address_of_v2_2() { return &___v2_2; }
	inline void set_v2_2(float value)
	{
		___v2_2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t
struct VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t::pid
	uint32_t ___pid_0;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t::unArgsHandle
	uint32_t ___unArgsHandle_1;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_unArgsHandle_1() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6, ___unArgsHandle_1)); }
	inline uint32_t get_unArgsHandle_1() const { return ___unArgsHandle_1; }
	inline uint32_t* get_address_of_unArgsHandle_1() { return &___unArgsHandle_1; }
	inline void set_unArgsHandle_1(uint32_t value)
	{
		___unArgsHandle_1 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Chaperone_t
struct VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8 
{
public:
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Chaperone_t::m_nPreviousUniverse
	uint64_t ___m_nPreviousUniverse_0;
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Chaperone_t::m_nCurrentUniverse
	uint64_t ___m_nCurrentUniverse_1;

public:
	inline static int32_t get_offset_of_m_nPreviousUniverse_0() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8, ___m_nPreviousUniverse_0)); }
	inline uint64_t get_m_nPreviousUniverse_0() const { return ___m_nPreviousUniverse_0; }
	inline uint64_t* get_address_of_m_nPreviousUniverse_0() { return &___m_nPreviousUniverse_0; }
	inline void set_m_nPreviousUniverse_0(uint64_t value)
	{
		___m_nPreviousUniverse_0 = value;
	}

	inline static int32_t get_offset_of_m_nCurrentUniverse_1() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8, ___m_nCurrentUniverse_1)); }
	inline uint64_t get_m_nCurrentUniverse_1() const { return ___m_nCurrentUniverse_1; }
	inline uint64_t* get_address_of_m_nCurrentUniverse_1() { return &___m_nCurrentUniverse_1; }
	inline void set_m_nCurrentUniverse_1(uint64_t value)
	{
		___m_nCurrentUniverse_1 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Controller_t
struct VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Controller_t::button
	uint32_t ___button_0;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC, ___button_0)); }
	inline uint32_t get_button_0() const { return ___button_0; }
	inline uint32_t* get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(uint32_t value)
	{
		___button_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t
struct VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623 
{
public:
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t::nVisualMode
	uint32_t ___nVisualMode_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_nVisualMode_1() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623, ___nVisualMode_1)); }
	inline uint32_t get_nVisualMode_1() const { return ___nVisualMode_1; }
	inline uint32_t* get_address_of_nVisualMode_1() { return &___nVisualMode_1; }
	inline void set_nVisualMode_1(uint32_t value)
	{
		___nVisualMode_1 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Ipd_t
struct VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A 
{
public:
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Ipd_t::ipdMeters
	float ___ipdMeters_0;

public:
	inline static int32_t get_offset_of_ipdMeters_0() { return static_cast<int32_t>(offsetof(VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A, ___ipdMeters_0)); }
	inline float get_ipdMeters_0() const { return ___ipdMeters_0; }
	inline float* get_address_of_ipdMeters_0() { return &___ipdMeters_0; }
	inline void set_ipdMeters_0(float value)
	{
		___ipdMeters_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t
struct VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E 
{
public:
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput0
	uint8_t ___cNewInput0_0;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput1
	uint8_t ___cNewInput1_1;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput2
	uint8_t ___cNewInput2_2;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput3
	uint8_t ___cNewInput3_3;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput4
	uint8_t ___cNewInput4_4;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput5
	uint8_t ___cNewInput5_5;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput6
	uint8_t ___cNewInput6_6;
	// System.Byte CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput7
	uint8_t ___cNewInput7_7;
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::uUserValue
	uint64_t ___uUserValue_8;

public:
	inline static int32_t get_offset_of_cNewInput0_0() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput0_0)); }
	inline uint8_t get_cNewInput0_0() const { return ___cNewInput0_0; }
	inline uint8_t* get_address_of_cNewInput0_0() { return &___cNewInput0_0; }
	inline void set_cNewInput0_0(uint8_t value)
	{
		___cNewInput0_0 = value;
	}

	inline static int32_t get_offset_of_cNewInput1_1() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput1_1)); }
	inline uint8_t get_cNewInput1_1() const { return ___cNewInput1_1; }
	inline uint8_t* get_address_of_cNewInput1_1() { return &___cNewInput1_1; }
	inline void set_cNewInput1_1(uint8_t value)
	{
		___cNewInput1_1 = value;
	}

	inline static int32_t get_offset_of_cNewInput2_2() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput2_2)); }
	inline uint8_t get_cNewInput2_2() const { return ___cNewInput2_2; }
	inline uint8_t* get_address_of_cNewInput2_2() { return &___cNewInput2_2; }
	inline void set_cNewInput2_2(uint8_t value)
	{
		___cNewInput2_2 = value;
	}

	inline static int32_t get_offset_of_cNewInput3_3() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput3_3)); }
	inline uint8_t get_cNewInput3_3() const { return ___cNewInput3_3; }
	inline uint8_t* get_address_of_cNewInput3_3() { return &___cNewInput3_3; }
	inline void set_cNewInput3_3(uint8_t value)
	{
		___cNewInput3_3 = value;
	}

	inline static int32_t get_offset_of_cNewInput4_4() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput4_4)); }
	inline uint8_t get_cNewInput4_4() const { return ___cNewInput4_4; }
	inline uint8_t* get_address_of_cNewInput4_4() { return &___cNewInput4_4; }
	inline void set_cNewInput4_4(uint8_t value)
	{
		___cNewInput4_4 = value;
	}

	inline static int32_t get_offset_of_cNewInput5_5() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput5_5)); }
	inline uint8_t get_cNewInput5_5() const { return ___cNewInput5_5; }
	inline uint8_t* get_address_of_cNewInput5_5() { return &___cNewInput5_5; }
	inline void set_cNewInput5_5(uint8_t value)
	{
		___cNewInput5_5 = value;
	}

	inline static int32_t get_offset_of_cNewInput6_6() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput6_6)); }
	inline uint8_t get_cNewInput6_6() const { return ___cNewInput6_6; }
	inline uint8_t* get_address_of_cNewInput6_6() { return &___cNewInput6_6; }
	inline void set_cNewInput6_6(uint8_t value)
	{
		___cNewInput6_6 = value;
	}

	inline static int32_t get_offset_of_cNewInput7_7() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___cNewInput7_7)); }
	inline uint8_t get_cNewInput7_7() const { return ___cNewInput7_7; }
	inline uint8_t* get_address_of_cNewInput7_7() { return &___cNewInput7_7; }
	inline void set_cNewInput7_7(uint8_t value)
	{
		___cNewInput7_7 = value;
	}

	inline static int32_t get_offset_of_uUserValue_8() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E, ___uUserValue_8)); }
	inline uint64_t get_uUserValue_8() const { return ___uUserValue_8; }
	inline uint64_t* get_address_of_uUserValue_8() { return &___uUserValue_8; }
	inline void set_uUserValue_8(uint64_t value)
	{
		___uUserValue_8 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t
struct VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t::unVRMessageOverlayResponse
	uint32_t ___unVRMessageOverlayResponse_0;

public:
	inline static int32_t get_offset_of_unVRMessageOverlayResponse_0() { return static_cast<int32_t>(offsetof(VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1, ___unVRMessageOverlayResponse_0)); }
	inline uint32_t get_unVRMessageOverlayResponse_0() const { return ___unVRMessageOverlayResponse_0; }
	inline uint32_t* get_address_of_unVRMessageOverlayResponse_0() { return &___unVRMessageOverlayResponse_0; }
	inline void set_unVRMessageOverlayResponse_0(uint32_t value)
	{
		___unVRMessageOverlayResponse_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Mouse_t
struct VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34 
{
public:
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Mouse_t::x
	float ___x_0;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Mouse_t::y
	float ___y_1;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Mouse_t::button
	uint32_t ___button_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34, ___button_2)); }
	inline uint32_t get_button_2() const { return ___button_2; }
	inline uint32_t* get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(uint32_t value)
	{
		___button_2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Notification_t
struct VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258 
{
public:
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Notification_t::ulUserValue
	uint64_t ___ulUserValue_0;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Notification_t::notificationId
	uint32_t ___notificationId_1;

public:
	inline static int32_t get_offset_of_ulUserValue_0() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258, ___ulUserValue_0)); }
	inline uint64_t get_ulUserValue_0() const { return ___ulUserValue_0; }
	inline uint64_t* get_address_of_ulUserValue_0() { return &___ulUserValue_0; }
	inline void set_ulUserValue_0(uint64_t value)
	{
		___ulUserValue_0 = value;
	}

	inline static int32_t get_offset_of_notificationId_1() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258, ___notificationId_1)); }
	inline uint32_t get_notificationId_1() const { return ___notificationId_1; }
	inline uint32_t* get_address_of_notificationId_1() { return &___notificationId_1; }
	inline void set_notificationId_1(uint32_t value)
	{
		___notificationId_1 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Overlay_t
struct VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB 
{
public:
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Overlay_t::overlayHandle
	uint64_t ___overlayHandle_0;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t
struct VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t::m_nFidelityLevel
	uint32_t ___m_nFidelityLevel_0;

public:
	inline static int32_t get_offset_of_m_nFidelityLevel_0() { return static_cast<int32_t>(offsetof(VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D, ___m_nFidelityLevel_0)); }
	inline uint32_t get_m_nFidelityLevel_0() const { return ___m_nFidelityLevel_0; }
	inline uint32_t* get_address_of_m_nFidelityLevel_0() { return &___m_nFidelityLevel_0; }
	inline void set_m_nFidelityLevel_0(uint32_t value)
	{
		___m_nFidelityLevel_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Process_t
struct VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Process_t::pid
	uint32_t ___pid_0;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Process_t::oldPid
	uint32_t ___oldPid_1;
	// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Process_t::bForced
	bool ___bForced_2;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_oldPid_1() { return static_cast<int32_t>(offsetof(VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA, ___oldPid_1)); }
	inline uint32_t get_oldPid_1() const { return ___oldPid_1; }
	inline uint32_t* get_address_of_oldPid_1() { return &___oldPid_1; }
	inline void set_oldPid_1(uint32_t value)
	{
		___oldPid_1 = value;
	}

	inline static int32_t get_offset_of_bForced_2() { return static_cast<int32_t>(offsetof(VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA, ___bForced_2)); }
	inline bool get_bForced_2() const { return ___bForced_2; }
	inline bool* get_address_of_bForced_2() { return &___bForced_2; }
	inline void set_bForced_2(bool value)
	{
		___bForced_2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Reserved_t
struct VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507 
{
public:
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Reserved_t::reserved0
	uint64_t ___reserved0_0;
	// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Reserved_t::reserved1
	uint64_t ___reserved1_1;

public:
	inline static int32_t get_offset_of_reserved0_0() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507, ___reserved0_0)); }
	inline uint64_t get_reserved0_0() const { return ___reserved0_0; }
	inline uint64_t* get_address_of_reserved0_0() { return &___reserved0_0; }
	inline void set_reserved0_0(uint64_t value)
	{
		___reserved0_0 = value;
	}

	inline static int32_t get_offset_of_reserved1_1() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507, ___reserved1_1)); }
	inline uint64_t get_reserved1_1() const { return ___reserved1_1; }
	inline uint64_t* get_address_of_reserved1_1() { return &___reserved1_1; }
	inline void set_reserved1_1(uint64_t value)
	{
		___reserved1_1 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t
struct VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3 
{
public:
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t::progress
	float ___progress_0;

public:
	inline static int32_t get_offset_of_progress_0() { return static_cast<int32_t>(offsetof(VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3, ___progress_0)); }
	inline float get_progress_0() const { return ___progress_0; }
	inline float* get_address_of_progress_0() { return &___progress_0; }
	inline void set_progress_0(float value)
	{
		___progress_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Screenshot_t
struct VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Screenshot_t::handle
	uint32_t ___handle_0;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Screenshot_t::type
	uint32_t ___type_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C, ___handle_0)); }
	inline uint32_t get_handle_0() const { return ___handle_0; }
	inline uint32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C, ___type_1)); }
	inline uint32_t get_type_1() const { return ___type_1; }
	inline uint32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(uint32_t value)
	{
		___type_1 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Scroll_t
struct VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7 
{
public:
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Scroll_t::xdelta
	float ___xdelta_0;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Scroll_t::ydelta
	float ___ydelta_1;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Scroll_t::repeatCount
	uint32_t ___repeatCount_2;

public:
	inline static int32_t get_offset_of_xdelta_0() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7, ___xdelta_0)); }
	inline float get_xdelta_0() const { return ___xdelta_0; }
	inline float* get_address_of_xdelta_0() { return &___xdelta_0; }
	inline void set_xdelta_0(float value)
	{
		___xdelta_0 = value;
	}

	inline static int32_t get_offset_of_ydelta_1() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7, ___ydelta_1)); }
	inline float get_ydelta_1() const { return ___ydelta_1; }
	inline float* get_address_of_ydelta_1() { return &___ydelta_1; }
	inline void set_ydelta_1(float value)
	{
		___ydelta_1 = value;
	}

	inline static int32_t get_offset_of_repeatCount_2() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7, ___repeatCount_2)); }
	inline uint32_t get_repeatCount_2() const { return ___repeatCount_2; }
	inline uint32_t* get_address_of_repeatCount_2() { return &___repeatCount_2; }
	inline void set_repeatCount_2(uint32_t value)
	{
		___repeatCount_2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t
struct VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA 
{
public:
	// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t::bResetBySystemMenu
	bool ___bResetBySystemMenu_0;

public:
	inline static int32_t get_offset_of_bResetBySystemMenu_0() { return static_cast<int32_t>(offsetof(VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA, ___bResetBySystemMenu_0)); }
	inline bool get_bResetBySystemMenu_0() const { return ___bResetBySystemMenu_0; }
	inline bool* get_address_of_bResetBySystemMenu_0() { return &___bResetBySystemMenu_0; }
	inline void set_bResetBySystemMenu_0(bool value)
	{
		___bResetBySystemMenu_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Status_t
struct VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Status_t::statusState
	uint32_t ___statusState_0;

public:
	inline static int32_t get_offset_of_statusState_0() { return static_cast<int32_t>(offsetof(VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F, ___statusState_0)); }
	inline uint32_t get_statusState_0() const { return ___statusState_0; }
	inline uint32_t* get_address_of_statusState_0() { return &___statusState_0; }
	inline void set_statusState_0(uint32_t value)
	{
		___statusState_0 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t
struct VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC 
{
public:
	// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::bFingerDown
	bool ___bFingerDown_0;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::flSecondsFingerDown
	float ___flSecondsFingerDown_1;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueXFirst
	float ___fValueXFirst_2;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueYFirst
	float ___fValueYFirst_3;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueXRaw
	float ___fValueXRaw_4;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueYRaw
	float ___fValueYRaw_5;

public:
	inline static int32_t get_offset_of_bFingerDown_0() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC, ___bFingerDown_0)); }
	inline bool get_bFingerDown_0() const { return ___bFingerDown_0; }
	inline bool* get_address_of_bFingerDown_0() { return &___bFingerDown_0; }
	inline void set_bFingerDown_0(bool value)
	{
		___bFingerDown_0 = value;
	}

	inline static int32_t get_offset_of_flSecondsFingerDown_1() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC, ___flSecondsFingerDown_1)); }
	inline float get_flSecondsFingerDown_1() const { return ___flSecondsFingerDown_1; }
	inline float* get_address_of_flSecondsFingerDown_1() { return &___flSecondsFingerDown_1; }
	inline void set_flSecondsFingerDown_1(float value)
	{
		___flSecondsFingerDown_1 = value;
	}

	inline static int32_t get_offset_of_fValueXFirst_2() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC, ___fValueXFirst_2)); }
	inline float get_fValueXFirst_2() const { return ___fValueXFirst_2; }
	inline float* get_address_of_fValueXFirst_2() { return &___fValueXFirst_2; }
	inline void set_fValueXFirst_2(float value)
	{
		___fValueXFirst_2 = value;
	}

	inline static int32_t get_offset_of_fValueYFirst_3() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC, ___fValueYFirst_3)); }
	inline float get_fValueYFirst_3() const { return ___fValueYFirst_3; }
	inline float* get_address_of_fValueYFirst_3() { return &___fValueYFirst_3; }
	inline void set_fValueYFirst_3(float value)
	{
		___fValueYFirst_3 = value;
	}

	inline static int32_t get_offset_of_fValueXRaw_4() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC, ___fValueXRaw_4)); }
	inline float get_fValueXRaw_4() const { return ___fValueXRaw_4; }
	inline float* get_address_of_fValueXRaw_4() { return &___fValueXRaw_4; }
	inline void set_fValueXRaw_4(float value)
	{
		___fValueXRaw_4 = value;
	}

	inline static int32_t get_offset_of_fValueYRaw_5() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC, ___fValueYRaw_5)); }
	inline float get_fValueYRaw_5() const { return ___fValueYRaw_5; }
	inline float* get_address_of_fValueYRaw_5() { return &___fValueYRaw_5; }
	inline void set_fValueYRaw_5(float value)
	{
		___fValueYRaw_5 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// CognitiveVR.ActiveSession.RenderEyetracking/EDeviceActivityLevel
struct EDeviceActivityLevel_t94F7FDF828C61E5C2490077D2E49E5367FE1C212 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/EDeviceActivityLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EDeviceActivityLevel_t94F7FDF828C61E5C2490077D2E49E5367FE1C212, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/ETrackedControllerRole
struct ETrackedControllerRole_tAEC05F979DA3905AD8A13EBD17BF37403FDD925B 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/ETrackedControllerRole::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedControllerRole_tAEC05F979DA3905AD8A13EBD17BF37403FDD925B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceClass
struct ETrackedDeviceClass_t830B9950ED96F24CC0B816BE892E22E18DB3AD2C 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedDeviceClass_t830B9950ED96F24CC0B816BE892E22E18DB3AD2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceProperty
struct ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError
struct ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/ETrackingResult
struct ETrackingResult_tC1C1200ACF42680F40B05D9B95D6D1FD6F8167E6 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/ETrackingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackingResult_tC1C1200ACF42680F40B05D9B95D6D1FD6F8167E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin
struct ETrackingUniverseOrigin_tE68C3FBA94700E28C43C1F47BDCE669104ED44E5 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackingUniverseOrigin_tE68C3FBA94700E28C43C1F47BDCE669104ED44E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/EVREye
struct EVREye_t7E76ABC02C5CB4AF436EA4597B89B2DBAB5C9B6A 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/EVREye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EVREye_t7E76ABC02C5CB4AF436EA4597B89B2DBAB5C9B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/EVRFirmwareError
struct EVRFirmwareError_t47B08A4EEE23E2024AAC8EBD0C348C9323A22AD5 
{
public:
	// System.Int32 CognitiveVR.ActiveSession.RenderEyetracking/EVRFirmwareError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EVRFirmwareError_t47B08A4EEE23E2024AAC8EBD0C348C9323A22AD5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t
struct VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Reserved_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::reserved
			VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507  ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507  ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Controller_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::controller
			VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC  ___controller_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC  ___controller_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Mouse_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::mouse
			VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34  ___mouse_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34  ___mouse_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Scroll_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::scroll
			VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7  ___scroll_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7  ___scroll_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Process_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::process
			VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA  ___process_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA  ___process_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Notification_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::notification
			VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258  ___notification_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258  ___notification_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Overlay_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::overlay
			VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB  ___overlay_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB  ___overlay_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Status_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::status
			VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F  ___status_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F  ___status_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Ipd_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::ipd
			VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A  ___ipd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A  ___ipd_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Chaperone_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::chaperone
			VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8  ___chaperone_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8  ___chaperone_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::performanceTest
			VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D  ___performanceTest_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D  ___performanceTest_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::touchPadMove
			VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC  ___touchPadMove_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC  ___touchPadMove_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::seatedZeroPoseReset
			VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA  ___seatedZeroPoseReset_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA  ___seatedZeroPoseReset_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Screenshot_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::screenshot
			VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C  ___screenshot_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C  ___screenshot_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::screenshotProgress
			VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3  ___screenshotProgress_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3  ___screenshotProgress_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::applicationLaunch
			VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6  ___applicationLaunch_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6  ___applicationLaunch_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::cameraSurface
			VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623  ___cameraSurface_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623  ___cameraSurface_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::messageOverlay
			VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1  ___messageOverlay_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1  ___messageOverlay_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Keyboard_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t::keyboard
			VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E  ___keyboard_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E  ___keyboard_18_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___reserved_0)); }
	inline VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507  get_reserved_0() const { return ___reserved_0; }
	inline VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507 * get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(VREvent_Reserved_t_t7A4B55B3E64A6E93FD1D39E82CC374D5325DE507  value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_controller_1() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___controller_1)); }
	inline VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC  get_controller_1() const { return ___controller_1; }
	inline VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC * get_address_of_controller_1() { return &___controller_1; }
	inline void set_controller_1(VREvent_Controller_t_t6AF927EC11CE6AD645F2E5675B51DBE66A8B0ECC  value)
	{
		___controller_1 = value;
	}

	inline static int32_t get_offset_of_mouse_2() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___mouse_2)); }
	inline VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34  get_mouse_2() const { return ___mouse_2; }
	inline VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34 * get_address_of_mouse_2() { return &___mouse_2; }
	inline void set_mouse_2(VREvent_Mouse_t_t892A106C51325CEA08ED3BAB6CC5D8DD4C469A34  value)
	{
		___mouse_2 = value;
	}

	inline static int32_t get_offset_of_scroll_3() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___scroll_3)); }
	inline VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7  get_scroll_3() const { return ___scroll_3; }
	inline VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7 * get_address_of_scroll_3() { return &___scroll_3; }
	inline void set_scroll_3(VREvent_Scroll_t_t8727BA8C0A3732FBBF3CF76E48A4B938162DA4A7  value)
	{
		___scroll_3 = value;
	}

	inline static int32_t get_offset_of_process_4() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___process_4)); }
	inline VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA  get_process_4() const { return ___process_4; }
	inline VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA * get_address_of_process_4() { return &___process_4; }
	inline void set_process_4(VREvent_Process_t_tAF9D814EA924D0BAF6D01A47FC04884A40EF53FA  value)
	{
		___process_4 = value;
	}

	inline static int32_t get_offset_of_notification_5() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___notification_5)); }
	inline VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258  get_notification_5() const { return ___notification_5; }
	inline VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258 * get_address_of_notification_5() { return &___notification_5; }
	inline void set_notification_5(VREvent_Notification_t_t0EDF21522FD698444A06511AB3E180C0DA8A5258  value)
	{
		___notification_5 = value;
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___overlay_6)); }
	inline VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB  get_overlay_6() const { return ___overlay_6; }
	inline VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB * get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(VREvent_Overlay_t_tAFDC027F9B8A8A4FF6F573EABAD86C3396ED74DB  value)
	{
		___overlay_6 = value;
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___status_7)); }
	inline VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F  get_status_7() const { return ___status_7; }
	inline VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F * get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(VREvent_Status_t_t7F9933C5ED3A9B41E14127CD2955604A47FBF74F  value)
	{
		___status_7 = value;
	}

	inline static int32_t get_offset_of_ipd_8() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___ipd_8)); }
	inline VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A  get_ipd_8() const { return ___ipd_8; }
	inline VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A * get_address_of_ipd_8() { return &___ipd_8; }
	inline void set_ipd_8(VREvent_Ipd_t_tE2B7C501FA5BAA50378EF3C0A4FAAB9C78F6131A  value)
	{
		___ipd_8 = value;
	}

	inline static int32_t get_offset_of_chaperone_9() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___chaperone_9)); }
	inline VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8  get_chaperone_9() const { return ___chaperone_9; }
	inline VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8 * get_address_of_chaperone_9() { return &___chaperone_9; }
	inline void set_chaperone_9(VREvent_Chaperone_t_t4BE1624B151C582E1159EB47E54D92B4038432C8  value)
	{
		___chaperone_9 = value;
	}

	inline static int32_t get_offset_of_performanceTest_10() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___performanceTest_10)); }
	inline VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D  get_performanceTest_10() const { return ___performanceTest_10; }
	inline VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D * get_address_of_performanceTest_10() { return &___performanceTest_10; }
	inline void set_performanceTest_10(VREvent_PerformanceTest_t_t3F8F4BEE95359A4D6573109E97849CCDB78B9F4D  value)
	{
		___performanceTest_10 = value;
	}

	inline static int32_t get_offset_of_touchPadMove_11() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___touchPadMove_11)); }
	inline VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC  get_touchPadMove_11() const { return ___touchPadMove_11; }
	inline VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC * get_address_of_touchPadMove_11() { return &___touchPadMove_11; }
	inline void set_touchPadMove_11(VREvent_TouchPadMove_t_t6BFD9E17F45606CD7C2569DB41AA02C8D7C6C1BC  value)
	{
		___touchPadMove_11 = value;
	}

	inline static int32_t get_offset_of_seatedZeroPoseReset_12() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___seatedZeroPoseReset_12)); }
	inline VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA  get_seatedZeroPoseReset_12() const { return ___seatedZeroPoseReset_12; }
	inline VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA * get_address_of_seatedZeroPoseReset_12() { return &___seatedZeroPoseReset_12; }
	inline void set_seatedZeroPoseReset_12(VREvent_SeatedZeroPoseReset_t_tA7D69F886AEEB83DE4C2D00966B882F19314E8BA  value)
	{
		___seatedZeroPoseReset_12 = value;
	}

	inline static int32_t get_offset_of_screenshot_13() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___screenshot_13)); }
	inline VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C  get_screenshot_13() const { return ___screenshot_13; }
	inline VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C * get_address_of_screenshot_13() { return &___screenshot_13; }
	inline void set_screenshot_13(VREvent_Screenshot_t_tBAD1AB855DA02358A06A2DE08805EF2017B16F1C  value)
	{
		___screenshot_13 = value;
	}

	inline static int32_t get_offset_of_screenshotProgress_14() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___screenshotProgress_14)); }
	inline VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3  get_screenshotProgress_14() const { return ___screenshotProgress_14; }
	inline VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3 * get_address_of_screenshotProgress_14() { return &___screenshotProgress_14; }
	inline void set_screenshotProgress_14(VREvent_ScreenshotProgress_t_t9E2B6E5195F55C5BD6FAC027EB0107C8EC7B2EB3  value)
	{
		___screenshotProgress_14 = value;
	}

	inline static int32_t get_offset_of_applicationLaunch_15() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___applicationLaunch_15)); }
	inline VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6  get_applicationLaunch_15() const { return ___applicationLaunch_15; }
	inline VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6 * get_address_of_applicationLaunch_15() { return &___applicationLaunch_15; }
	inline void set_applicationLaunch_15(VREvent_ApplicationLaunch_t_tA1E91CABC40B53571D8F946DE49192EB484BAFD6  value)
	{
		___applicationLaunch_15 = value;
	}

	inline static int32_t get_offset_of_cameraSurface_16() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___cameraSurface_16)); }
	inline VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623  get_cameraSurface_16() const { return ___cameraSurface_16; }
	inline VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623 * get_address_of_cameraSurface_16() { return &___cameraSurface_16; }
	inline void set_cameraSurface_16(VREvent_EditingCameraSurface_t_t372730801E331D1AA50BE9DC5E338CF7DB127623  value)
	{
		___cameraSurface_16 = value;
	}

	inline static int32_t get_offset_of_messageOverlay_17() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___messageOverlay_17)); }
	inline VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1  get_messageOverlay_17() const { return ___messageOverlay_17; }
	inline VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1 * get_address_of_messageOverlay_17() { return &___messageOverlay_17; }
	inline void set_messageOverlay_17(VREvent_MessageOverlay_t_t954B4606D67B41748A0A31E002ABD8EEE79F08D1  value)
	{
		___messageOverlay_17 = value;
	}

	inline static int32_t get_offset_of_keyboard_18() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348, ___keyboard_18)); }
	inline VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E  get_keyboard_18() const { return ___keyboard_18; }
	inline VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E * get_address_of_keyboard_18() { return &___keyboard_18; }
	inline void set_keyboard_18(VREvent_Keyboard_t_tE4102E87871EC6EC6EE7B114758DF5B6857FE43E  value)
	{
		___keyboard_18 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t
struct TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 
{
public:
	// CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  ___mDeviceToAbsoluteTracking_0;
	// CognitiveVR.ActiveSession.RenderEyetracking/HmdVector3_t CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t::vVelocity
	HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC  ___vVelocity_1;
	// CognitiveVR.ActiveSession.RenderEyetracking/HmdVector3_t CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t::vAngularVelocity
	HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC  ___vAngularVelocity_2;
	// CognitiveVR.ActiveSession.RenderEyetracking/ETrackingResult CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t::eTrackingResult
	int32_t ___eTrackingResult_3;
	// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t::bPoseIsValid
	bool ___bPoseIsValid_4;
	// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t::bDeviceIsConnected
	bool ___bDeviceIsConnected_5;

public:
	inline static int32_t get_offset_of_mDeviceToAbsoluteTracking_0() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898, ___mDeviceToAbsoluteTracking_0)); }
	inline HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  get_mDeviceToAbsoluteTracking_0() const { return ___mDeviceToAbsoluteTracking_0; }
	inline HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E * get_address_of_mDeviceToAbsoluteTracking_0() { return &___mDeviceToAbsoluteTracking_0; }
	inline void set_mDeviceToAbsoluteTracking_0(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  value)
	{
		___mDeviceToAbsoluteTracking_0 = value;
	}

	inline static int32_t get_offset_of_vVelocity_1() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898, ___vVelocity_1)); }
	inline HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC  get_vVelocity_1() const { return ___vVelocity_1; }
	inline HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC * get_address_of_vVelocity_1() { return &___vVelocity_1; }
	inline void set_vVelocity_1(HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC  value)
	{
		___vVelocity_1 = value;
	}

	inline static int32_t get_offset_of_vAngularVelocity_2() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898, ___vAngularVelocity_2)); }
	inline HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC  get_vAngularVelocity_2() const { return ___vAngularVelocity_2; }
	inline HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC * get_address_of_vAngularVelocity_2() { return &___vAngularVelocity_2; }
	inline void set_vAngularVelocity_2(HmdVector3_t_t1869D7F154248B2187FA6ECF161F699EE885C0DC  value)
	{
		___vAngularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_eTrackingResult_3() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898, ___eTrackingResult_3)); }
	inline int32_t get_eTrackingResult_3() const { return ___eTrackingResult_3; }
	inline int32_t* get_address_of_eTrackingResult_3() { return &___eTrackingResult_3; }
	inline void set_eTrackingResult_3(int32_t value)
	{
		___eTrackingResult_3 = value;
	}

	inline static int32_t get_offset_of_bPoseIsValid_4() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898, ___bPoseIsValid_4)); }
	inline bool get_bPoseIsValid_4() const { return ___bPoseIsValid_4; }
	inline bool* get_address_of_bPoseIsValid_4() { return &___bPoseIsValid_4; }
	inline void set_bPoseIsValid_4(bool value)
	{
		___bPoseIsValid_4 = value;
	}

	inline static int32_t get_offset_of_bDeviceIsConnected_5() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898, ___bDeviceIsConnected_5)); }
	inline bool get_bDeviceIsConnected_5() const { return ___bDeviceIsConnected_5; }
	inline bool* get_address_of_bDeviceIsConnected_5() { return &___bDeviceIsConnected_5; }
	inline void set_bDeviceIsConnected_5(bool value)
	{
		___bDeviceIsConnected_5 = value;
	}
};


// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t
struct VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 
{
public:
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t::eventType
	uint32_t ___eventType_0;
	// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// CognitiveVR.ActiveSession.RenderEyetracking/VREvent_Data_t CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t::data
	VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348  ___data_3;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2, ___eventType_0)); }
	inline uint32_t get_eventType_0() const { return ___eventType_0; }
	inline uint32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(uint32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_eventAgeSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2, ___eventAgeSeconds_2)); }
	inline float get_eventAgeSeconds_2() const { return ___eventAgeSeconds_2; }
	inline float* get_address_of_eventAgeSeconds_2() { return &___eventAgeSeconds_2; }
	inline void set_eventAgeSeconds_2(float value)
	{
		___eventAgeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2, ___data_3)); }
	inline VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348  get_data_3() const { return ___data_3; }
	inline VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(VREvent_Data_t_tFB8FF0602D88775E1E779FD20B0D1497EE1C7348  value)
	{
		___data_3 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw
struct _GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum
struct _GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
struct _GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize
struct _GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
struct _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
struct _GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty
struct _GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync
struct _GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel
struct _GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass
struct _GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole
struct _GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty
struct _GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop
struct _IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess
struct _IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected
struct _IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate
struct _PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent
struct _PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose
struct _PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus
struct _ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose
struct _ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility
struct _SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED  : public MulticastDelegate_t
{
public:

public:
};


// CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse
struct _TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A (_GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A * __this, int32_t ___eEye0, float* ___pfLeft1, float* ___pfRight2, float* ___pfTop3, float* ___pfBottom4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, float*, float*, float*, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4);

}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionRaw__ctor_m6BAD08762AE3778B79F25CA32ED3AAE38B614EBC (_GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::Invoke(CognitiveVR.ActiveSession.RenderEyetracking/EVREye,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionRaw_Invoke_mD8DCB65774B8F545604D738DFC2A430A6B800C30 (_GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A * __this, int32_t ___eEye0, float* ___pfLeft1, float* ___pfRight2, float* ___pfTop3, float* ___pfBottom4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, float*, float*, float*, float*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, float*, float*, float*, float*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, float*, float*, float*, float* >::Invoke(targetMethod, targetThis, ___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4);
					else
						GenericVirtActionInvoker5< int32_t, float*, float*, float*, float* >::Invoke(targetMethod, targetThis, ___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, float*, float*, float*, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4);
					else
						VirtActionInvoker5< int32_t, float*, float*, float*, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4);
				}
			}
			else
			{
				if (___parameterCount == 4)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, float*, float*, float*, float*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___eEye0) - 1), ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, float*, float*, float*, float*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eEye0, ___pfLeft1, ___pfRight2, ___pfTop3, ___pfBottom4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::BeginInvoke(CognitiveVR.ActiveSession.RenderEyetracking/EVREye,System.Single&,System.Single&,System.Single&,System.Single&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetProjectionRaw_BeginInvoke_m31465739712A635924EF785FD46BE400F05EDA5B (_GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A * __this, int32_t ___eEye0, float* ___pfLeft1, float* ___pfRight2, float* ___pfTop3, float* ___pfBottom4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREye_t7E76ABC02C5CB4AF436EA4597B89B2DBAB5C9B6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(EVREye_t7E76ABC02C5CB4AF436EA4597B89B2DBAB5C9B6A_il2cpp_TypeInfo_var, &___eEye0);
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___pfLeft1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___pfRight2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___pfTop3);
	__d_args[4] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___pfBottom4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::EndInvoke(System.Single&,System.Single&,System.Single&,System.Single&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionRaw_EndInvoke_m75E8EDA6166A8316FDDEF4F16698135187A03829 (_GetProjectionRaw_t85D59ACD95331FD9B2EA09A81B9B13882B27002A * __this, float* ___pfLeft0, float* ___pfRight1, float* ___pfTop2, float* ___pfBottom3, RuntimeObject* ___result4, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pfLeft0,
	___pfRight1,
	___pfTop2,
	___pfBottom3,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result4, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper__GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68 (_GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___error0);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetPropErrorNameFromEnum__ctor_m704B06C4A05BD09E1046B0CCB8C9E3D3BEE91AF1 (_GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::Invoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetPropErrorNameFromEnum_Invoke_mAF7C07952E723BBA0D41C52F476E767ED7D95DE5 (_GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___error0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						result = VirtFuncInvoker1< intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___error0) - 1), targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::BeginInvoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetPropErrorNameFromEnum_BeginInvoke_m06322565A34493D0D3D443BC02A47ACD3460AD7F (_GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68 * __this, int32_t ___error0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var, &___error0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.IntPtr CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetPropErrorNameFromEnum_EndInvoke_m13D95ACCD7CC8F94055620D2C40A634850CA1617 (_GetPropErrorNameFromEnum_t52394F857DC91BF9CBADD1F6BAA6903FB92EFA68 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  DelegatePInvokeWrapper__GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6 (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6 * __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRawZeroPoseToStandingAbsoluteTrackingPose__ctor_mD22431275D496721416E7718A53079D7A77B5F8B (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_mF4E9A7269805596A25F7FBED76AB07A5D475B208 (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6 * __this, const RuntimeMethod* method)
{
	HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRawZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_mA03B41C9E82ED831F74D524A62736C3C269F82F8 (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  _GetRawZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_m181D474894249CEB458AE3BF723F03FEDF751AE9 (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tF03DD4845C4C84B04E4F04A71CBC5C0A422C21C6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA (_GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA * __this, uint32_t* ___pnWidth0, uint32_t* ___pnHeight1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___pnWidth0, ___pnHeight1);

}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRecommendedRenderTargetSize__ctor_mBCE921E4691B5B875FDEF92C1F65CDA4380A5D80 (_GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::Invoke(System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRecommendedRenderTargetSize_Invoke_mE31EB5D4695BC1EA7055A64EF472206648BE9BF6 (_GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA * __this, uint32_t* ___pnWidth0, uint32_t* ___pnHeight1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t*, uint32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pnWidth0, ___pnHeight1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t*, uint32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pnWidth0, ___pnHeight1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___pnWidth0, ___pnHeight1);
					else
						GenericVirtActionInvoker2< uint32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___pnWidth0, ___pnHeight1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pnWidth0, ___pnHeight1);
					else
						VirtActionInvoker2< uint32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pnWidth0, ___pnHeight1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t*, uint32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pnWidth0, ___pnHeight1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::BeginInvoke(System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRecommendedRenderTargetSize_BeginInvoke_m57A9EFE91564A1980FA8FCABF639E07384E76D2E (_GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA * __this, uint32_t* ___pnWidth0, uint32_t* ___pnHeight1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &*___pnWidth0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &*___pnHeight1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRecommendedRenderTargetSize_EndInvoke_mADAD4926CF4FDB1BAE984580FD18A077BCD0DB7E (_GetRecommendedRenderTargetSize_tC1C889F48D5842FED77526974D445A6D81EC06BA * __this, uint32_t* ___pnWidth0, uint32_t* ___pnHeight1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pnWidth0,
	___pnHeight1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  DelegatePInvokeWrapper__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF * __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetSeatedZeroPoseToStandingAbsoluteTrackingPose__ctor_m970D2D6ED23D54399FBD61B2D98CE6217747F364 (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m967CBE4DB15E6BE195233D4E0873CBDA38AA1E80 (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF * __this, const RuntimeMethod* method)
{
	HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_m57BAFDE03EFE4F01F901EA61DB7C7C689CD36EFC (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// CognitiveVR.ActiveSession.RenderEyetracking/HmdMatrix34_t CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E  _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_m4D1A90E2A397745B951547FD5B12AF34C136BADA (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t43FA3D1F22A85D50D72FC10D6CA149F66437ECEF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(HmdMatrix34_t_t367C750C4A0DD213BD9AF65E6C0247F8BF54D00E *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C (_GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C * __this, int32_t ___eTrackedDeviceClass0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___punTrackedDeviceIndexArray1, uint32_t ___unTrackedDeviceIndexArrayCount2, uint32_t ___unRelativeToTrackedDeviceIndex3, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(int32_t, uint32_t*, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___punTrackedDeviceIndexArray1' to native representation
	uint32_t* ____punTrackedDeviceIndexArray1_marshaled = NULL;
	if (___punTrackedDeviceIndexArray1 != NULL)
	{
		____punTrackedDeviceIndexArray1_marshaled = reinterpret_cast<uint32_t*>((___punTrackedDeviceIndexArray1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___eTrackedDeviceClass0, ____punTrackedDeviceIndexArray1_marshaled, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetSortedTrackedDeviceIndicesOfClass__ctor_m379F617A77300BE407FE4D23BA77F2959DCFF4AA (_GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::Invoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceClass,System.UInt32[],System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_mD5A4111A6FBB3D8A89C0985041AA8C33C8EDA9E7 (_GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C * __this, int32_t ___eTrackedDeviceClass0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___punTrackedDeviceIndexArray1, uint32_t ___unTrackedDeviceIndexArrayCount2, uint32_t ___unRelativeToTrackedDeviceIndex3, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< uint32_t, int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3);
					else
						result = GenericVirtFuncInvoker4< uint32_t, int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< uint32_t, int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3);
					else
						result = VirtFuncInvoker4< uint32_t, int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___eTrackedDeviceClass0) - 1), ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, int32_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, uint32_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___eTrackedDeviceClass0, ___punTrackedDeviceIndexArray1, ___unTrackedDeviceIndexArrayCount2, ___unRelativeToTrackedDeviceIndex3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceClass,System.UInt32[],System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetSortedTrackedDeviceIndicesOfClass_BeginInvoke_mE5AE39E06DEBF9CFA63A21A0BA3306591F995A5F (_GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C * __this, int32_t ___eTrackedDeviceClass0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___punTrackedDeviceIndexArray1, uint32_t ___unTrackedDeviceIndexArrayCount2, uint32_t ___unRelativeToTrackedDeviceIndex3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceClass_t830B9950ED96F24CC0B816BE892E22E18DB3AD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(ETrackedDeviceClass_t830B9950ED96F24CC0B816BE892E22E18DB3AD2C_il2cpp_TypeInfo_var, &___eTrackedDeviceClass0);
	__d_args[1] = ___punTrackedDeviceIndexArray1;
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unTrackedDeviceIndexArrayCount2);
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unRelativeToTrackedDeviceIndex3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetSortedTrackedDeviceIndicesOfClass_EndInvoke_m33BC4CDCCD37CB6AE66435A143A572956AD3E5CB (_GetSortedTrackedDeviceIndicesOfClass_t50EA29B8DE86E22A19E0F2797774A4C14053FD7C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966 (_GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966 * __this, uint32_t ___unDeviceIndex0, int32_t ___prop1, StringBuilder_t * ___pchValue2, uint32_t ___unBufferSize3, int32_t* ___pError4, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(uint32_t, int32_t, char*, uint32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___pchValue2' to native representation
	char* ____pchValue2_marshaled = NULL;
	____pchValue2_marshaled = il2cpp_codegen_marshal_string_builder(___pchValue2);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___unDeviceIndex0, ___prop1, ____pchValue2_marshaled, ___unBufferSize3, ___pError4);

	// Marshaling of parameter '___pchValue2' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___pchValue2, ____pchValue2_marshaled);

	// Marshaling cleanup of parameter '___pchValue2' native representation
	il2cpp_codegen_marshal_free(____pchValue2_marshaled);
	____pchValue2_marshaled = NULL;

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetStringTrackedDeviceProperty__ctor_m0725609E5CE1011F614CDCD498629A14AA360D65 (_GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::Invoke(System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetStringTrackedDeviceProperty_Invoke_mDE4ED92758D0AE769DBC7997DA499E28E957F67A (_GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966 * __this, uint32_t ___unDeviceIndex0, int32_t ___prop1, StringBuilder_t * ___pchValue2, uint32_t ___unBufferSize3, int32_t* ___pError4, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< uint32_t, uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4);
					else
						result = GenericVirtFuncInvoker5< uint32_t, uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< uint32_t, uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4);
					else
						result = VirtFuncInvoker5< uint32_t, uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4);
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, uint32_t, int32_t, StringBuilder_t *, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, ___prop1, ___pchValue2, ___unBufferSize3, ___pError4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::BeginInvoke(System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetStringTrackedDeviceProperty_BeginInvoke_m4745F4E902BB1EEDF0B5B5912D83940B6A1AF0F0 (_GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966 * __this, uint32_t ___unDeviceIndex0, int32_t ___prop1, StringBuilder_t * ___pchValue2, uint32_t ___unBufferSize3, int32_t* ___pError4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unDeviceIndex0);
	__d_args[1] = Box(ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F_il2cpp_TypeInfo_var, &___prop1);
	__d_args[2] = ___pchValue2;
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unBufferSize3);
	__d_args[4] = Box(ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var, &*___pError4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::EndInvoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetStringTrackedDeviceProperty_EndInvoke_mE02BF2E521684C18AC3D32F1B1A1DA2E32DB49D1 (_GetStringTrackedDeviceProperty_t42F0DFD73C8D183E8F0316F116EAD5CF352FA966 * __this, int32_t* ___pError0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pError0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB (_GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB * __this, float* ___pfSecondsSinceLastVsync0, uint64_t* ___pulFrameCounter1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(float*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pfSecondsSinceLastVsync0, ___pulFrameCounter1);

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTimeSinceLastVsync__ctor_mF9CADECEA63F0911A282B0197C5F16366D8D0EFC (_GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::Invoke(System.Single&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetTimeSinceLastVsync_Invoke_mCB3EDFE4402D3D7B0DAB68B5C24B1EAB8792910C (_GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB * __this, float* ___pfSecondsSinceLastVsync0, uint64_t* ___pulFrameCounter1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (float*, uint64_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pfSecondsSinceLastVsync0, ___pulFrameCounter1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, float*, uint64_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pfSecondsSinceLastVsync0, ___pulFrameCounter1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, float*, uint64_t* >::Invoke(targetMethod, targetThis, ___pfSecondsSinceLastVsync0, ___pulFrameCounter1);
					else
						result = GenericVirtFuncInvoker2< bool, float*, uint64_t* >::Invoke(targetMethod, targetThis, ___pfSecondsSinceLastVsync0, ___pulFrameCounter1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, float*, uint64_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pfSecondsSinceLastVsync0, ___pulFrameCounter1);
					else
						result = VirtFuncInvoker2< bool, float*, uint64_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pfSecondsSinceLastVsync0, ___pulFrameCounter1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, float*, uint64_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pfSecondsSinceLastVsync0, ___pulFrameCounter1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::BeginInvoke(System.Single&,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTimeSinceLastVsync_BeginInvoke_m62741AAED863649DBAE86F9A0B39A6BFFA7FD552 (_GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB * __this, float* ___pfSecondsSinceLastVsync0, uint64_t* ___pulFrameCounter1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___pfSecondsSinceLastVsync0);
	__d_args[1] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &*___pulFrameCounter1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::EndInvoke(System.Single&,System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetTimeSinceLastVsync_EndInvoke_mAE295763356AB8261F59436F62E5A4250644D12B (_GetTimeSinceLastVsync_tC75C6BF56C3F3E7F70A4E7C714941E999F6EABFB * __this, float* ___pfSecondsSinceLastVsync0, uint64_t* ___pulFrameCounter1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pfSecondsSinceLastVsync0,
	___pulFrameCounter1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F (_GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F * __this, uint32_t ___unDeviceId0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___unDeviceId0);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrackedDeviceActivityLevel__ctor_mFF71F106D620DAC3B93E7B386A23B6472F6B029C (_GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// CognitiveVR.ActiveSession.RenderEyetracking/EDeviceActivityLevel CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceActivityLevel_Invoke_mD1C8D7ACFD343326ACF81B85220D8E1F8C5CB239 (_GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F * __this, uint32_t ___unDeviceId0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceId0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceId0);
					else
						result = GenericVirtFuncInvoker1< int32_t, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceId0);
					else
						result = VirtFuncInvoker1< int32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceId0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceId0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrackedDeviceActivityLevel_BeginInvoke_mFB1C364B2A5D08504D5E40C9A1909B9EF580BED7 (_GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F * __this, uint32_t ___unDeviceId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unDeviceId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// CognitiveVR.ActiveSession.RenderEyetracking/EDeviceActivityLevel CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceActivityLevel_EndInvoke_m73CBEA547E66F2CD253B650F7278132AEDE9A845 (_GetTrackedDeviceActivityLevel_tB833B306B09D4C23E09E8E158D593E3E08BE488F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E (_GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E * __this, uint32_t ___unDeviceIndex0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___unDeviceIndex0);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrackedDeviceClass__ctor_m7B13555A4647A89398928E40AA6428BF3BEAF826 (_GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceClass CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceClass_Invoke_m03898EF08969EC144893B63775ADA7B7558B5700 (_GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E * __this, uint32_t ___unDeviceIndex0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceIndex0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceIndex0);
					else
						result = GenericVirtFuncInvoker1< int32_t, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceIndex0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceIndex0);
					else
						result = VirtFuncInvoker1< int32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceIndex0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrackedDeviceClass_BeginInvoke_mADA1BD7E1B370EE508B34B0F23F4DF62E66408F7 (_GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E * __this, uint32_t ___unDeviceIndex0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unDeviceIndex0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceClass CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceClass_EndInvoke_mA9D9BA19E815FCFA88E39F8727FC45BDAA8D73E9 (_GetTrackedDeviceClass_t561796D037D7E29EFC9A2110F2511156F126312E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34 (_GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34 * __this, int32_t ___unDeviceType0, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___unDeviceType0);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrackedDeviceIndexForControllerRole__ctor_m73F3474D2E4DF7C8B9C9DB009E4873D562AD3B6C (_GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::Invoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedControllerRole)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m7081844CC49F022410AC3254D278D572BC4E6099 (_GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34 * __this, int32_t ___unDeviceType0, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceType0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceType0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___unDeviceType0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___unDeviceType0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceType0);
					else
						result = VirtFuncInvoker1< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceType0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___unDeviceType0) - 1), targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceType0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::BeginInvoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedControllerRole,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrackedDeviceIndexForControllerRole_BeginInvoke_m43873AD470BBEE826086BB07362D985CA8F33158 (_GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34 * __this, int32_t ___unDeviceType0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedControllerRole_tAEC05F979DA3905AD8A13EBD17BF37403FDD925B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ETrackedControllerRole_tAEC05F979DA3905AD8A13EBD17BF37403FDD925B_il2cpp_TypeInfo_var, &___unDeviceType0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.UInt32 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetTrackedDeviceIndexForControllerRole_EndInvoke_m56F44A4E5C845A73BCB3D2136797D69A816AF705 (_GetTrackedDeviceIndexForControllerRole_t5703858031DD9EBF2B51B677A20262A27C8DBC34 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint64_t DelegatePInvokeWrapper__GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F (_GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F * __this, uint32_t ___unDeviceIndex0, int32_t ___prop1, int32_t* ___pError2, const RuntimeMethod* method)
{
	typedef uint64_t (STDCALL *PInvokeFunc)(uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint64_t returnValue = il2cppPInvokeFunc(___unDeviceIndex0, ___prop1, ___pError2);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetUint64TrackedDeviceProperty__ctor_m7918EF8026D57F9BC1C6D14191720741D3F252FD (_GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::Invoke(System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _GetUint64TrackedDeviceProperty_Invoke_m02933BD2DEAEF3E1543DFEF30A731ECA6D64AD1E (_GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F * __this, uint32_t ___unDeviceIndex0, int32_t ___prop1, int32_t* ___pError2, const RuntimeMethod* method)
{
	uint64_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef uint64_t (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceIndex0, ___prop1, ___pError2, targetMethod);
			}
			else
			{
				// closed
				typedef uint64_t (*FunctionPointerType) (void*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, ___prop1, ___pError2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< uint64_t, uint32_t, int32_t, int32_t* >::Invoke(targetMethod, targetThis, ___unDeviceIndex0, ___prop1, ___pError2);
					else
						result = GenericVirtFuncInvoker3< uint64_t, uint32_t, int32_t, int32_t* >::Invoke(targetMethod, targetThis, ___unDeviceIndex0, ___prop1, ___pError2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< uint64_t, uint32_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceIndex0, ___prop1, ___pError2);
					else
						result = VirtFuncInvoker3< uint64_t, uint32_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceIndex0, ___prop1, ___pError2);
				}
			}
			else
			{
				typedef uint64_t (*FunctionPointerType) (void*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, ___prop1, ___pError2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::BeginInvoke(System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetUint64TrackedDeviceProperty_BeginInvoke_m4F4DDFB87E1BD74C613BB2E071FCF7FA6DC39EF8 (_GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F * __this, uint32_t ___unDeviceIndex0, int32_t ___prop1, int32_t* ___pError2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unDeviceIndex0);
	__d_args[1] = Box(ETrackedDeviceProperty_t64351D0560EB9B220A541B6B58FCAA45739C900F_il2cpp_TypeInfo_var, &___prop1);
	__d_args[2] = Box(ETrackedPropertyError_t17AB0A97925C5517936B9FB497D67D3950E69DA5_il2cpp_TypeInfo_var, &*___pError2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.UInt64 CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::EndInvoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _GetUint64TrackedDeviceProperty_EndInvoke_mF8785F987813014BF607FEA7E54B8BA3069E68F1 (_GetUint64TrackedDeviceProperty_t6CD689C2E6473A920FCCA66E5E7278FCABF79C0F * __this, int32_t* ___pError0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pError0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(uint64_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE (_IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE * __this, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsDisplayOnDesktop__ctor_m11F7E5B149412B9353FEA6B5CD1936ED9787EE63 (_IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsDisplayOnDesktop_Invoke_m949A2674D7FC4082FD159BE306421CEE0DA3492C (_IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE * __this, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef bool (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsDisplayOnDesktop_BeginInvoke_mF4A3ECB51180CE9EAC2203466C7177E6A173C0B1 (_IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsDisplayOnDesktop_EndInvoke_mC1C8AF2294A693B815A4AB0BD554EB98846F2F2F (_IsDisplayOnDesktop_tFC79C242AD7BBEB7FB53AE21A2B7A91BCAEA74BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA (_IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA * __this, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsInputFocusCapturedByAnotherProcess__ctor_mF5F09A145D5EE3F53FF854E37E382EA0052DE4A0 (_IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsInputFocusCapturedByAnotherProcess_Invoke_m2A7596933C0102764B97D9ADF23180AD23849338 (_IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA * __this, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef bool (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsInputFocusCapturedByAnotherProcess_BeginInvoke_m65CEDE3931D38DDAA321C41E601DB1F485701FF2 (_IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsInputFocusCapturedByAnotherProcess_EndInvoke_m958E5767C3EE94D97E67C8E2A74B617CE6AFDB86 (_IsInputFocusCapturedByAnotherProcess_tED68C73CFB4A0115BF51D275063475CDB84796DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE (_IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE * __this, uint32_t ___unDeviceIndex0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___unDeviceIndex0);

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsTrackedDeviceConnected__ctor_m6D3D1A5D428A16E095FC31F921129DF77AF5D2CA (_IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsTrackedDeviceConnected_Invoke_mF7305A4771ABA67BB86A9D174B4ED03E054A835D (_IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE * __this, uint32_t ___unDeviceIndex0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceIndex0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceIndex0);
					else
						result = GenericVirtFuncInvoker1< bool, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceIndex0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceIndex0);
					else
						result = VirtFuncInvoker1< bool, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceIndex0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsTrackedDeviceConnected_BeginInvoke_m54BF9F623597E1DC137679F77D595EF15968A609 (_IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE * __this, uint32_t ___unDeviceIndex0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unDeviceIndex0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsTrackedDeviceConnected_EndInvoke_m4F23E93287E05DC2535DA3628EC38B9B5C4085AF (_IsTrackedDeviceConnected_t95EC2001508C2598019DED5104B8D69F98169ABE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D (_PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D * __this, uint32_t ___unDeviceIndex0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___unDeviceIndex0);

	return returnValue;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PerformFirmwareUpdate__ctor_m4F7240B781C09829B4AAA25CA0A545C460E14039 (_PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// CognitiveVR.ActiveSession.RenderEyetracking/EVRFirmwareError CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _PerformFirmwareUpdate_Invoke_m3C1E2D75569D7371A2A3220D8725C50842CA2353 (_PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D * __this, uint32_t ___unDeviceIndex0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___unDeviceIndex0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceIndex0);
					else
						result = GenericVirtFuncInvoker1< int32_t, uint32_t >::Invoke(targetMethod, targetThis, ___unDeviceIndex0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unDeviceIndex0);
					else
						result = VirtFuncInvoker1< int32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unDeviceIndex0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___unDeviceIndex0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PerformFirmwareUpdate_BeginInvoke_m8B158B5F2C6D3152CE4059DC9BC870F006E42FFD (_PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D * __this, uint32_t ___unDeviceIndex0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unDeviceIndex0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// CognitiveVR.ActiveSession.RenderEyetracking/EVRFirmwareError CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _PerformFirmwareUpdate_EndInvoke_mCEC25EF68ED20900342F2F922CEEA5E55CB898AB (_PerformFirmwareUpdate_tB167B347E4F3A3CAAA7E84830F54E9EDFC677A6D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9 (_PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9 * __this, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent0, uint32_t ___uncbVREvent1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pEvent0, ___uncbVREvent1);

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PollNextEvent__ctor_m2CBD4ED48ACE0EEBAD3C9AC50519E9AA2E7FCA9D (_PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::Invoke(CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEvent_Invoke_mA10812128123E18FBA590977DBB972A8FF8E23A1 (_PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9 * __this, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent0, uint32_t ___uncbVREvent1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pEvent0, ___uncbVREvent1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pEvent0, ___uncbVREvent1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t >::Invoke(targetMethod, targetThis, ___pEvent0, ___uncbVREvent1);
					else
						result = GenericVirtFuncInvoker2< bool, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t >::Invoke(targetMethod, targetThis, ___pEvent0, ___uncbVREvent1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pEvent0, ___uncbVREvent1);
					else
						result = VirtFuncInvoker2< bool, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pEvent0, ___uncbVREvent1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___pEvent0) - 1), ___uncbVREvent1, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pEvent0, ___uncbVREvent1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::BeginInvoke(CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PollNextEvent_BeginInvoke_m3B4C9A7E917E1C3FD5115DFAB24B470C53C9D4DC (_PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9 * __this, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent0, uint32_t ___uncbVREvent1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2_il2cpp_TypeInfo_var, &*___pEvent0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___uncbVREvent1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::EndInvoke(CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEvent_EndInvoke_mD1CB7E15BE9FFB93F0BEAD95FC590786E2CE0DFB (_PollNextEvent_t614EAFA7F33666E4D2031DC2E52A8BAF55CE6CA9 * __this, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pEvent0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8 (_PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8 * __this, int32_t ___eOrigin0, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent1, uint32_t ___uncbVREvent2, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * ___pTrackedDevicePose3, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3);

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PollNextEventWithPose__ctor_mB222C15FF80EB879A02AF496AE1F3958044879AC (_PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::Invoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEventWithPose_Invoke_mD6DF6FE4246F6917E19C103DD55C512BBF98383B (_PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8 * __this, int32_t ___eOrigin0, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent1, uint32_t ___uncbVREvent2, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * ___pTrackedDevicePose3, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef bool (*FunctionPointerType) (int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< bool, int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * >::Invoke(targetMethod, targetThis, ___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3);
					else
						result = GenericVirtFuncInvoker4< bool, int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * >::Invoke(targetMethod, targetThis, ___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< bool, int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3);
					else
						result = VirtFuncInvoker4< bool, int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___eOrigin0) - 1), ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, int32_t, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 *, uint32_t, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___eOrigin0, ___pEvent1, ___uncbVREvent2, ___pTrackedDevicePose3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::BeginInvoke(CognitiveVR.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32,CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PollNextEventWithPose_BeginInvoke_m89AD59C797AFD65DA39B9498306AE28BE47A5A6C (_PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8 * __this, int32_t ___eOrigin0, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent1, uint32_t ___uncbVREvent2, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * ___pTrackedDevicePose3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackingUniverseOrigin_tE68C3FBA94700E28C43C1F47BDCE669104ED44E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(ETrackingUniverseOrigin_tE68C3FBA94700E28C43C1F47BDCE669104ED44E5_il2cpp_TypeInfo_var, &___eOrigin0);
	__d_args[1] = Box(VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2_il2cpp_TypeInfo_var, &*___pEvent1);
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___uncbVREvent2);
	__d_args[3] = Box(TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898_il2cpp_TypeInfo_var, &*___pTrackedDevicePose3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::EndInvoke(CognitiveVR.ActiveSession.RenderEyetracking/VREvent_t&,CognitiveVR.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEventWithPose_EndInvoke_m202F0A5468768C9D7D341D2E1CC964171058A193 (_PollNextEventWithPose_t9633E627D880CC6BED69DD1287153A2B46296FD8 * __this, VREvent_t_tB952D8581DE9FB38A8FDD8AE474AA29A3B0D77F2 * ___pEvent0, TrackedDevicePose_t_tA61B0BCB6588FC7FAA0ED923CC0B3DEEB9D76898 * ___pTrackedDevicePose1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pEvent0,
	___pTrackedDevicePose1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690 (_ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReleaseInputFocus__ctor_mB15AE495BD6BD9F07D2150A509FA43DFD571B9FB (_ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReleaseInputFocus_Invoke_mF3FCFDF097759F2B39836A85FC3A263D1C950316 (_ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReleaseInputFocus_BeginInvoke_mAB95CC4A60855C95E57090B6E2FACC461F540C58 (_ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReleaseInputFocus_EndInvoke_mB0BF10949C09751C5464D24E09741BF71CEBE48F (_ReleaseInputFocus_t394EEF4382475EE60C46D85FA163D9788485F690 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C (_ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ResetSeatedZeroPose__ctor_mD1E8071C38798DBA445104145AC547E502C6BFB3 (_ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ResetSeatedZeroPose_Invoke_m139224896315B8609EF3B7631A71B93FBD1C8002 (_ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ResetSeatedZeroPose_BeginInvoke_mAAB137534FD9DFB0DF24B45C59F70A062F231AAB (_ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ResetSeatedZeroPose_EndInvoke_m1B698443FE575753A7651AAC67E116D608DDF390 (_ResetSeatedZeroPose_tF7F69FD0F88B22D46D3D6D35CD704ED213CA386C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED (_SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED * __this, bool ___bIsVisibleOnDesktop0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___bIsVisibleOnDesktop0));

	return static_cast<bool>(returnValue);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetDisplayVisibility__ctor_m7800EC7554171F8112736C16E84562D624512F20 (_SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SetDisplayVisibility_Invoke_mBED98C4E4A7ED93A43195F919DC377DB84F83D48 (_SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED * __this, bool ___bIsVisibleOnDesktop0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___bIsVisibleOnDesktop0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___bIsVisibleOnDesktop0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, bool >::Invoke(targetMethod, targetThis, ___bIsVisibleOnDesktop0);
					else
						result = GenericVirtFuncInvoker1< bool, bool >::Invoke(targetMethod, targetThis, ___bIsVisibleOnDesktop0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bIsVisibleOnDesktop0);
					else
						result = VirtFuncInvoker1< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bIsVisibleOnDesktop0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___bIsVisibleOnDesktop0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetDisplayVisibility_BeginInvoke_m8A6D3302599B699664985D96E75EEDA666B1618F (_SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED * __this, bool ___bIsVisibleOnDesktop0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___bIsVisibleOnDesktop0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SetDisplayVisibility_EndInvoke_m0A58242851FD81910ECE5C087C8D86BDBB6F45F4 (_SetDisplayVisibility_t2CEC1014812674348310071398185AA6E477B4ED * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60 (_TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60 * __this, uint32_t ___unControllerDeviceIndex0, uint32_t ___unAxisId1, Il2CppChar ___usDurationMicroSec2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint32_t, uint32_t, uint8_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___unControllerDeviceIndex0, ___unAxisId1, static_cast<uint8_t>(___usDurationMicroSec2));

}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TriggerHapticPulse__ctor_m8A2BDE0A99A0E67AE7E8567A237186E029CBBAC7 (_TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::Invoke(System.UInt32,System.UInt32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TriggerHapticPulse_Invoke_m62DFD93A5EA7304490831FAF16744C99174F4372 (_TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60 * __this, uint32_t ___unControllerDeviceIndex0, uint32_t ___unAxisId1, Il2CppChar ___usDurationMicroSec2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint32_t, uint32_t, Il2CppChar >::Invoke(targetMethod, targetThis, ___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2);
					else
						GenericVirtActionInvoker3< uint32_t, uint32_t, Il2CppChar >::Invoke(targetMethod, targetThis, ___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint32_t, uint32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2);
					else
						VirtActionInvoker3< uint32_t, uint32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___unControllerDeviceIndex0, ___unAxisId1, ___usDurationMicroSec2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::BeginInvoke(System.UInt32,System.UInt32,System.Char,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TriggerHapticPulse_BeginInvoke_m2FC5E42EA15B5710EB15CF34A3E15CD5C283EE1D (_TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60 * __this, uint32_t ___unControllerDeviceIndex0, uint32_t ___unAxisId1, Il2CppChar ___usDurationMicroSec2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unControllerDeviceIndex0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___unAxisId1);
	__d_args[2] = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &___usDurationMicroSec2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void CognitiveVR.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TriggerHapticPulse_EndInvoke_m16787085B05DC640E01C37FC66B1040463E34D3E (_TriggerHapticPulse_t8B49C69A71FD07859E083138E900411A5A0C9F60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
