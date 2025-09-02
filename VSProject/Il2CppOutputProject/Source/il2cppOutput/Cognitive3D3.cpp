#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4*, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { &p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { &p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1, T2, T3*, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { &p1, &p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3*, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3, T4*, T5, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5 p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, &p2, &p3, p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,Cognitive3D.SensorRecorder/SensorData>
struct Dictionary_2_tF7FED398F721A15CC6AE45DFD1A919959CB2FBE8;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>
struct List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t[]
struct TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F;
// Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint[]
struct SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121;
// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry[]
struct SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Cognitive3D.FixationRecorder
struct FixationRecorder_t963BBF18547A3F299BF5D11A8EB2A44C58E75286;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Cognitive3D.GazeBase
struct GazeBase_t0C7DCE2F75161E58229F7CBEE5E01734CE466715;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Cognitive3D.ICache
struct ICache_t54B959E6139DF33A4F5AB2E90919FAC71D07BE8E;
// Cognitive3D.ILocalExitpoll
struct ILocalExitpoll_t32710C504C653BC6C3F835EDF1ED8819F222924D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Cognitive3D.NetworkManager
struct NetworkManager_t0C9275F1055DDA110329D3889184ED48B64B58B2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Cognitive3D.ActiveSession.SensorCanvas
struct SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1;
// Cognitive3D.ActiveSession.SensorRenderCamera
struct SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Cognitive3D.Cognitive3D_Manager/onLevelLoaded
struct onLevelLoaded_t374AE522FD2900BA1341086269ADAF045CF1FE28;
// Cognitive3D.Cognitive3D_Manager/onQuit
struct onQuit_tF56C01A346DE866EB3C1C1351FC65CA7A9B7AB9E;
// Cognitive3D.Cognitive3D_Manager/onSendData
struct onSendData_t0282EB454D34C262E5BD2B2B4A5310FEC7A119C5;
// Cognitive3D.Cognitive3D_Manager/onSessionBegin
struct onSessionBegin_t0646E31062FF4162A5DFC8D80A6BD9F411629D2F;
// Cognitive3D.Cognitive3D_Manager/onSessionEnd
struct onSessionEnd_t915EA4E6751214614BEA0D15BCDBB7EB08DD3D2B;
// Cognitive3D.Cognitive3D_Manager/onTick
struct onTick_tD2B098AEA6A137CC3DB22DC8F33FFB894447281E;
// Cognitive3D.Cognitive3D_Manager/onUpdate
struct onUpdate_t2BD424E898B04A65619C8723008A48001AA22AEB;
// Cognitive3D.Cognitive3D_Preferences/SceneSettings
struct SceneSettings_t82090968952A9395A09FA25B89B9BFD7C4B87D0A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem
struct CVRSystem_t7999085E3758601DA74DE797BA9F105A0FA6EFA2;
// Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop
struct OpenVRInterop_tC887A557B12E809FC4A6A2B823149CF54DFBD956;
// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry
struct SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22;
// Cognitive3D.SensorRecorder/onNewSensorRecorded
struct onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting
struct _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt
struct _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform
struct _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus
struct _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion
struct _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest
struct _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty
struct _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum
struct _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum
struct _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex
struct _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState
struct _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose
struct _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex
struct _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo
struct _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose
struct _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum
struct _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform
struct _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty
struct _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh
struct _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty
struct _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty
struct _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice
struct _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix
struct _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw
struct _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum
struct _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
struct _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize
struct _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
struct _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
struct _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty
struct _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync
struct _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel
struct _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass
struct _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole
struct _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty
struct _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop
struct _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess
struct _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected
struct _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate
struct _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent
struct _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose
struct _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus
struct _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose
struct _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility
struct _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8;
// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse
struct _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EHiddenAreaMeshType_t178A8ABCAED06B967D301EA9D582D1D29FAC216E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETextureType_tB8D86FF50400D93ACCD584BC778CA1CB4DF74014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedControllerRole_t51DF0EFFEB5D4D7774CE80E5A2B65FDCB1414DA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedDeviceClass_t528102180B6DF9B20D6B0879581194DF0350D1A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EVRButtonId_tFC8771DDA2FC473F3C06962326E3E861FF011CC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EVRControllerAxisType_t1E1ECA548E7451DFFD438B6DA442F465185214B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EVREventType_t72CBD8174E40D324959CB52E2CD05CECD69F2307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Util_t259290BAA45FFFAA649363691D004694F0E9CF92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23E9780DCDBFF9B8C927445DD8A9345156F7DD9C;
IL2CPP_EXTERN_C String_t* _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F;
IL2CPP_EXTERN_C String_t* _stringLiteral5314E6368487A4939609EEEBC098F322B7696355;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m49B7A1E8C13D4336DC8A738FA57CB3D1B3123035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA3C51A24CCA1AA47FF3E292AB2B151D756B4D86A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m83190B47FEC18F1D290A27C60EFE6608228D3914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m137269A891E547F39774573503157D6D4C49E754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SensorCanvas_SensorRecorder_OnNewSensorRecorded_mDFE9A87A1DD0E53BA02BAB6140B0F88843B6AAB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F;
struct SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121;
struct SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>
struct List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Cognitive3D.SensorRecorder
struct SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop
struct OpenVRInterop_tC887A557B12E809FC4A6A2B823149CF54DFBD956  : public RuntimeObject
{
};

// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry
struct SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22  : public RuntimeObject
{
	// System.Boolean Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::active
	bool ___active_0;
	// System.String Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::name
	String_t* ___name_1;
	// UnityEngine.UI.Text Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::Name
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Name_2;
	// UnityEngine.UI.Image Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::ColourSwatch
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ColourSwatch_3;
	// UnityEngine.UI.Text Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::MinValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MinValue_4;
	// UnityEngine.UI.Text Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::MaxValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MaxValue_5;
	// UnityEngine.Material Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Material_6;
	// System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint> Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::TimesValues
	List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* ___TimesValues_7;
	// System.Single Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::minValue
	float ___minValue_8;
	// System.Single Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::maxValue
	float ___maxValue_9;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
struct KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
struct KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t82E334CDFA4EF59EFA559F72A685C60DD74CA12A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t82E334CDFA4EF59EFA559F72A685C60DD74CA12A__padding[32];
	};
};

// Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t
struct DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t::rfRed0
	float ___rfRed0_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t::rfRed1
	float ___rfRed1_1;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t::rfGreen0
	float ___rfGreen0_2;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t::rfGreen1
	float ___rfGreen1_3;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t::rfBlue0
	float ___rfBlue0_4;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t::rfBlue1
	float ___rfBlue1_5;
};

// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t
struct HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t::m11
	float ___m11_11;
};

// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t
struct HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m0
	float ___m0_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m1
	float ___m1_1;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m2
	float ___m2_2;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m3
	float ___m3_3;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m4
	float ___m4_4;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m5
	float ___m5_5;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m6
	float ___m6_6;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m7
	float ___m7_7;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m8
	float ___m8_8;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m9
	float ___m9_9;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m10
	float ___m10_10;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m11
	float ___m11_11;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m12
	float ___m12_12;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m13
	float ___m13_13;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m14
	float ___m14_14;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t::m15
	float ___m15_15;
};

// Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t
struct HmdVector3_t_tC13A47D040A16EEBD2206979F7C28CD47EE92FEA 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t::v0
	float ___v0_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t::v1
	float ___v1_1;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t::v2
	float ___v2_2;
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
struct IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D 
{
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetRecommendedRenderTargetSize
	_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* ___GetRecommendedRenderTargetSize_0;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetProjectionMatrix
	_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* ___GetProjectionMatrix_1;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetProjectionRaw
	_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* ___GetProjectionRaw_2;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::ComputeDistortion
	_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* ___ComputeDistortion_3;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetEyeToHeadTransform
	_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* ___GetEyeToHeadTransform_4;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetTimeSinceLastVsync
	_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* ___GetTimeSinceLastVsync_5;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetD3D9AdapterIndex
	_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* ___GetD3D9AdapterIndex_6;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetDXGIOutputInfo
	_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* ___GetDXGIOutputInfo_7;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetOutputDevice
	_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* ___GetOutputDevice_8;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::IsDisplayOnDesktop
	_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* ___IsDisplayOnDesktop_9;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::SetDisplayVisibility
	_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* ___SetDisplayVisibility_10;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetDeviceToAbsoluteTrackingPose
	_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* ___GetDeviceToAbsoluteTrackingPose_11;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::ResetSeatedZeroPose
	_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* ___ResetSeatedZeroPose_12;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose
	_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* ___GetRawZeroPoseToStandingAbsoluteTrackingPose_14;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetSortedTrackedDeviceIndicesOfClass
	_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* ___GetSortedTrackedDeviceIndicesOfClass_15;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetTrackedDeviceActivityLevel
	_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* ___GetTrackedDeviceActivityLevel_16;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::ApplyTransform
	_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* ___ApplyTransform_17;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetTrackedDeviceIndexForControllerRole
	_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* ___GetTrackedDeviceIndexForControllerRole_18;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetControllerRoleForTrackedDeviceIndex
	_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* ___GetControllerRoleForTrackedDeviceIndex_19;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetTrackedDeviceClass
	_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* ___GetTrackedDeviceClass_20;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::IsTrackedDeviceConnected
	_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* ___IsTrackedDeviceConnected_21;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetBoolTrackedDeviceProperty
	_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* ___GetBoolTrackedDeviceProperty_22;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetFloatTrackedDeviceProperty
	_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* ___GetFloatTrackedDeviceProperty_23;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetInt32TrackedDeviceProperty
	_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* ___GetInt32TrackedDeviceProperty_24;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetUint64TrackedDeviceProperty
	_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* ___GetUint64TrackedDeviceProperty_25;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetMatrix34TrackedDeviceProperty
	_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* ___GetMatrix34TrackedDeviceProperty_26;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetStringTrackedDeviceProperty
	_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* ___GetStringTrackedDeviceProperty_27;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetPropErrorNameFromEnum
	_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* ___GetPropErrorNameFromEnum_28;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::PollNextEvent
	_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* ___PollNextEvent_29;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::PollNextEventWithPose
	_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* ___PollNextEventWithPose_30;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetEventTypeNameFromEnum
	_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* ___GetEventTypeNameFromEnum_31;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetHiddenAreaMesh
	_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* ___GetHiddenAreaMesh_32;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetControllerState
	_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* ___GetControllerState_33;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetControllerStateWithPose
	_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* ___GetControllerStateWithPose_34;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::TriggerHapticPulse
	_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* ___TriggerHapticPulse_35;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetButtonIdNameFromEnum
	_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* ___GetButtonIdNameFromEnum_36;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::GetControllerAxisTypeNameFromEnum
	_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* ___GetControllerAxisTypeNameFromEnum_37;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::CaptureInputFocus
	_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* ___CaptureInputFocus_38;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::ReleaseInputFocus
	_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* ___ReleaseInputFocus_39;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::IsInputFocusCapturedByAnotherProcess
	_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* ___IsInputFocusCapturedByAnotherProcess_40;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::DriverDebugRequest
	_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* ___DriverDebugRequest_41;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::PerformFirmwareUpdate
	_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* ___PerformFirmwareUpdate_42;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::AcknowledgeQuit_Exiting
	_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* ___AcknowledgeQuit_Exiting_43;
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem::AcknowledgeQuit_UserPrompt
	_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* ___AcknowledgeQuit_UserPrompt_44;
};
// Native definition for P/Invoke marshalling of Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
struct IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetRecommendedRenderTargetSize_0;
	Il2CppMethodPointer ___GetProjectionMatrix_1;
	Il2CppMethodPointer ___GetProjectionRaw_2;
	Il2CppMethodPointer ___ComputeDistortion_3;
	Il2CppMethodPointer ___GetEyeToHeadTransform_4;
	Il2CppMethodPointer ___GetTimeSinceLastVsync_5;
	Il2CppMethodPointer ___GetD3D9AdapterIndex_6;
	Il2CppMethodPointer ___GetDXGIOutputInfo_7;
	Il2CppMethodPointer ___GetOutputDevice_8;
	Il2CppMethodPointer ___IsDisplayOnDesktop_9;
	Il2CppMethodPointer ___SetDisplayVisibility_10;
	Il2CppMethodPointer ___GetDeviceToAbsoluteTrackingPose_11;
	Il2CppMethodPointer ___ResetSeatedZeroPose_12;
	Il2CppMethodPointer ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13;
	Il2CppMethodPointer ___GetRawZeroPoseToStandingAbsoluteTrackingPose_14;
	Il2CppMethodPointer ___GetSortedTrackedDeviceIndicesOfClass_15;
	Il2CppMethodPointer ___GetTrackedDeviceActivityLevel_16;
	Il2CppMethodPointer ___ApplyTransform_17;
	Il2CppMethodPointer ___GetTrackedDeviceIndexForControllerRole_18;
	Il2CppMethodPointer ___GetControllerRoleForTrackedDeviceIndex_19;
	Il2CppMethodPointer ___GetTrackedDeviceClass_20;
	Il2CppMethodPointer ___IsTrackedDeviceConnected_21;
	Il2CppMethodPointer ___GetBoolTrackedDeviceProperty_22;
	Il2CppMethodPointer ___GetFloatTrackedDeviceProperty_23;
	Il2CppMethodPointer ___GetInt32TrackedDeviceProperty_24;
	Il2CppMethodPointer ___GetUint64TrackedDeviceProperty_25;
	Il2CppMethodPointer ___GetMatrix34TrackedDeviceProperty_26;
	Il2CppMethodPointer ___GetStringTrackedDeviceProperty_27;
	Il2CppMethodPointer ___GetPropErrorNameFromEnum_28;
	Il2CppMethodPointer ___PollNextEvent_29;
	Il2CppMethodPointer ___PollNextEventWithPose_30;
	Il2CppMethodPointer ___GetEventTypeNameFromEnum_31;
	Il2CppMethodPointer ___GetHiddenAreaMesh_32;
	Il2CppMethodPointer ___GetControllerState_33;
	Il2CppMethodPointer ___GetControllerStateWithPose_34;
	Il2CppMethodPointer ___TriggerHapticPulse_35;
	Il2CppMethodPointer ___GetButtonIdNameFromEnum_36;
	Il2CppMethodPointer ___GetControllerAxisTypeNameFromEnum_37;
	Il2CppMethodPointer ___CaptureInputFocus_38;
	Il2CppMethodPointer ___ReleaseInputFocus_39;
	Il2CppMethodPointer ___IsInputFocusCapturedByAnotherProcess_40;
	Il2CppMethodPointer ___DriverDebugRequest_41;
	Il2CppMethodPointer ___PerformFirmwareUpdate_42;
	Il2CppMethodPointer ___AcknowledgeQuit_Exiting_43;
	Il2CppMethodPointer ___AcknowledgeQuit_UserPrompt_44;
};
// Native definition for COM marshalling of Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
struct IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_com
{
	Il2CppMethodPointer ___GetRecommendedRenderTargetSize_0;
	Il2CppMethodPointer ___GetProjectionMatrix_1;
	Il2CppMethodPointer ___GetProjectionRaw_2;
	Il2CppMethodPointer ___ComputeDistortion_3;
	Il2CppMethodPointer ___GetEyeToHeadTransform_4;
	Il2CppMethodPointer ___GetTimeSinceLastVsync_5;
	Il2CppMethodPointer ___GetD3D9AdapterIndex_6;
	Il2CppMethodPointer ___GetDXGIOutputInfo_7;
	Il2CppMethodPointer ___GetOutputDevice_8;
	Il2CppMethodPointer ___IsDisplayOnDesktop_9;
	Il2CppMethodPointer ___SetDisplayVisibility_10;
	Il2CppMethodPointer ___GetDeviceToAbsoluteTrackingPose_11;
	Il2CppMethodPointer ___ResetSeatedZeroPose_12;
	Il2CppMethodPointer ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13;
	Il2CppMethodPointer ___GetRawZeroPoseToStandingAbsoluteTrackingPose_14;
	Il2CppMethodPointer ___GetSortedTrackedDeviceIndicesOfClass_15;
	Il2CppMethodPointer ___GetTrackedDeviceActivityLevel_16;
	Il2CppMethodPointer ___ApplyTransform_17;
	Il2CppMethodPointer ___GetTrackedDeviceIndexForControllerRole_18;
	Il2CppMethodPointer ___GetControllerRoleForTrackedDeviceIndex_19;
	Il2CppMethodPointer ___GetTrackedDeviceClass_20;
	Il2CppMethodPointer ___IsTrackedDeviceConnected_21;
	Il2CppMethodPointer ___GetBoolTrackedDeviceProperty_22;
	Il2CppMethodPointer ___GetFloatTrackedDeviceProperty_23;
	Il2CppMethodPointer ___GetInt32TrackedDeviceProperty_24;
	Il2CppMethodPointer ___GetUint64TrackedDeviceProperty_25;
	Il2CppMethodPointer ___GetMatrix34TrackedDeviceProperty_26;
	Il2CppMethodPointer ___GetStringTrackedDeviceProperty_27;
	Il2CppMethodPointer ___GetPropErrorNameFromEnum_28;
	Il2CppMethodPointer ___PollNextEvent_29;
	Il2CppMethodPointer ___PollNextEventWithPose_30;
	Il2CppMethodPointer ___GetEventTypeNameFromEnum_31;
	Il2CppMethodPointer ___GetHiddenAreaMesh_32;
	Il2CppMethodPointer ___GetControllerState_33;
	Il2CppMethodPointer ___GetControllerStateWithPose_34;
	Il2CppMethodPointer ___TriggerHapticPulse_35;
	Il2CppMethodPointer ___GetButtonIdNameFromEnum_36;
	Il2CppMethodPointer ___GetControllerAxisTypeNameFromEnum_37;
	Il2CppMethodPointer ___CaptureInputFocus_38;
	Il2CppMethodPointer ___ReleaseInputFocus_39;
	Il2CppMethodPointer ___IsInputFocusCapturedByAnotherProcess_40;
	Il2CppMethodPointer ___DriverDebugRequest_41;
	Il2CppMethodPointer ___PerformFirmwareUpdate_42;
	Il2CppMethodPointer ___AcknowledgeQuit_Exiting_43;
	Il2CppMethodPointer ___AcknowledgeQuit_UserPrompt_44;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t
struct VRControllerAxis_t_t84ECAD76F901F6107F17F2C8988C8BC1594BC110 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t::x
	float ___x_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t::y
	float ___y_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t
struct VREvent_ApplicationLaunch_t_tA00B0DCC3FA81B8FCE8F63768D3D4BC22506FFAC 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t::unArgsHandle
	uint32_t ___unArgsHandle_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Chaperone_t
struct VREvent_Chaperone_t_t128A6D49BDAA22F7FA5E6F9C1438A2EB54D483DD 
{
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Chaperone_t::m_nPreviousUniverse
	uint64_t ___m_nPreviousUniverse_0;
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Chaperone_t::m_nCurrentUniverse
	uint64_t ___m_nCurrentUniverse_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Controller_t
struct VREvent_Controller_t_tECE2D2F669129C61E5E1E85F8DFAF291068ECF6E 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Controller_t::button
	uint32_t ___button_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t
struct VREvent_EditingCameraSurface_t_tAC368FF1C4E2E79BE7DD439B09F4FF0B25802037 
{
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t::nVisualMode
	uint32_t ___nVisualMode_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Ipd_t
struct VREvent_Ipd_t_t9812C7C2F2078411850DF78D2767D1D46B2736BE 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Ipd_t::ipdMeters
	float ___ipdMeters_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t
struct VREvent_Keyboard_t_t6B74A0B6E2DF05F1DCE9C1AEE25BEB1015B93E85 
{
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput0
	uint8_t ___cNewInput0_0;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput1
	uint8_t ___cNewInput1_1;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput2
	uint8_t ___cNewInput2_2;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput3
	uint8_t ___cNewInput3_3;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput4
	uint8_t ___cNewInput4_4;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput5
	uint8_t ___cNewInput5_5;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput6
	uint8_t ___cNewInput6_6;
	// System.Byte Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::cNewInput7
	uint8_t ___cNewInput7_7;
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t::uUserValue
	uint64_t ___uUserValue_8;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t
struct VREvent_MessageOverlay_t_tAC47ACF6779F8A2E493D0856A96F1861347CDD45 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t::unVRMessageOverlayResponse
	uint32_t ___unVRMessageOverlayResponse_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t
struct VREvent_Mouse_t_tAB135D11F07585FB5FFC3AB2B7F2AF685D670266 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t::x
	float ___x_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t::y
	float ___y_1;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t::button
	uint32_t ___button_2;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Notification_t
struct VREvent_Notification_t_t5B01C048FB41C3E40B4A57F61E6C78EA9E6E547A 
{
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Notification_t::ulUserValue
	uint64_t ___ulUserValue_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Notification_t::notificationId
	uint32_t ___notificationId_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Overlay_t
struct VREvent_Overlay_t_t502B349AB37C7D130216DA2A78450DEA291600AC 
{
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Overlay_t::overlayHandle
	uint64_t ___overlayHandle_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t
struct VREvent_PerformanceTest_t_t0478B91BEEF937FD13BDD7874E6D4FF6E0F251CC 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t::m_nFidelityLevel
	uint32_t ___m_nFidelityLevel_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t
struct VREvent_Process_t_t59646EA3DE780B51B93C524B6F8AC8867AA0BE55 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t::oldPid
	uint32_t ___oldPid_1;
	// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t::bForced
	bool ___bForced_2;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Reserved_t
struct VREvent_Reserved_t_tA2C396F2F676A689F80A7E6F26E8B67898F3DFDB 
{
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Reserved_t::reserved0
	uint64_t ___reserved0_0;
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Reserved_t::reserved1
	uint64_t ___reserved1_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t
struct VREvent_ScreenshotProgress_t_tD2E3AC3CA052EC8104D7E445F0775E8830FABC64 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t::progress
	float ___progress_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Screenshot_t
struct VREvent_Screenshot_t_tF5F0B0B84F4162CDADC47E838BE9750655AC130A 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Screenshot_t::handle
	uint32_t ___handle_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Screenshot_t::type
	uint32_t ___type_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t
struct VREvent_Scroll_t_t2DB17E4BF7F178DBD44027DFE01973FF2DDF80FA 
{
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t::xdelta
	float ___xdelta_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t::ydelta
	float ___ydelta_1;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t::repeatCount
	uint32_t ___repeatCount_2;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t
struct VREvent_SeatedZeroPoseReset_t_tF997206056D5508CD3FCC80CB13909F90795F574 
{
	// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t::bResetBySystemMenu
	bool ___bResetBySystemMenu_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Status_t
struct VREvent_Status_t_t3D1A3C4A047ACCA0DB490E62E10E5656A3797E4B 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Status_t::statusState
	uint32_t ___statusState_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t
struct VREvent_TouchPadMove_t_t35C6D4887E2052939332756FA533218A95E4DFDF 
{
	// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::bFingerDown
	bool ___bFingerDown_0;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::flSecondsFingerDown
	float ___flSecondsFingerDown_1;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueXFirst
	float ___fValueXFirst_2;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueYFirst
	float ___fValueYFirst_3;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueXRaw
	float ___fValueXRaw_4;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t::fValueYRaw
	float ___fValueYRaw_5;
};

// Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint
struct SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E 
{
	// System.Double Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint::Time
	double ___Time_0;
	// System.Single Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint::Value
	float ___Value_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_tFBEC3A5A35B9411AFAAD1638F1411BD5CCB36BF2 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>
struct Enumerator_t9DE5961A481A89538702A73B5740544CC7515302 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t42751542FF68E05B811B86529010251C83624A1C  : public RuntimeObject
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem
struct CVRSystem_t7999085E3758601DA74DE797BA9F105A0FA6EFA2  : public RuntimeObject
{
	// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem::FnTable
	IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D ___FnTable_0;
};

// Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t
struct HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B 
{
	// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t::pVertexData
	intptr_t ___pVertexData_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t::unTriangleCount
	uint32_t ___unTriangleCount_1;
};

// Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t
struct TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D 
{
	// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 ___mDeviceToAbsoluteTracking_0;
	// Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t::vVelocity
	HmdVector3_t_tC13A47D040A16EEBD2206979F7C28CD47EE92FEA ___vVelocity_1;
	// Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t::vAngularVelocity
	HmdVector3_t_tC13A47D040A16EEBD2206979F7C28CD47EE92FEA ___vAngularVelocity_2;
	// Cognitive3D.ActiveSession.RenderEyetracking/ETrackingResult Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t::eTrackingResult
	int32_t ___eTrackingResult_3;
	// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t::bPoseIsValid
	bool ___bPoseIsValid_4;
	// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t::bDeviceIsConnected
	bool ___bDeviceIsConnected_5;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t
struct VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::unPacketNum
	uint32_t ___unPacketNum_0;
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::ulButtonPressed
	uint64_t ___ulButtonPressed_1;
	// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::ulButtonTouched
	uint64_t ___ulButtonTouched_2;
	// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::rAxis0
	VRControllerAxis_t_t84ECAD76F901F6107F17F2C8988C8BC1594BC110 ___rAxis0_3;
	// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::rAxis1
	VRControllerAxis_t_t84ECAD76F901F6107F17F2C8988C8BC1594BC110 ___rAxis1_4;
	// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::rAxis2
	VRControllerAxis_t_t84ECAD76F901F6107F17F2C8988C8BC1594BC110 ___rAxis2_5;
	// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::rAxis3
	VRControllerAxis_t_t84ECAD76F901F6107F17F2C8988C8BC1594BC110 ___rAxis3_6;
	// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t::rAxis4
	VRControllerAxis_t_t84ECAD76F901F6107F17F2C8988C8BC1594BC110 ___rAxis4_7;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t
struct VREvent_Data_t_tC7A47C6B6B27572F81ACB0714A91575989000B08 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Reserved_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::reserved
			VREvent_Reserved_t_tA2C396F2F676A689F80A7E6F26E8B67898F3DFDB ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Reserved_t_tA2C396F2F676A689F80A7E6F26E8B67898F3DFDB ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Controller_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::controller
			VREvent_Controller_t_tECE2D2F669129C61E5E1E85F8DFAF291068ECF6E ___controller_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Controller_t_tECE2D2F669129C61E5E1E85F8DFAF291068ECF6E ___controller_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::mouse
			VREvent_Mouse_t_tAB135D11F07585FB5FFC3AB2B7F2AF685D670266 ___mouse_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Mouse_t_tAB135D11F07585FB5FFC3AB2B7F2AF685D670266 ___mouse_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::scroll
			VREvent_Scroll_t_t2DB17E4BF7F178DBD44027DFE01973FF2DDF80FA ___scroll_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Scroll_t_t2DB17E4BF7F178DBD44027DFE01973FF2DDF80FA ___scroll_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::process
			VREvent_Process_t_t59646EA3DE780B51B93C524B6F8AC8867AA0BE55 ___process_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Process_t_t59646EA3DE780B51B93C524B6F8AC8867AA0BE55 ___process_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Notification_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::notification
			VREvent_Notification_t_t5B01C048FB41C3E40B4A57F61E6C78EA9E6E547A ___notification_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Notification_t_t5B01C048FB41C3E40B4A57F61E6C78EA9E6E547A ___notification_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Overlay_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::overlay
			VREvent_Overlay_t_t502B349AB37C7D130216DA2A78450DEA291600AC ___overlay_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Overlay_t_t502B349AB37C7D130216DA2A78450DEA291600AC ___overlay_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Status_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::status
			VREvent_Status_t_t3D1A3C4A047ACCA0DB490E62E10E5656A3797E4B ___status_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Status_t_t3D1A3C4A047ACCA0DB490E62E10E5656A3797E4B ___status_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Ipd_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::ipd
			VREvent_Ipd_t_t9812C7C2F2078411850DF78D2767D1D46B2736BE ___ipd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Ipd_t_t9812C7C2F2078411850DF78D2767D1D46B2736BE ___ipd_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Chaperone_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::chaperone
			VREvent_Chaperone_t_t128A6D49BDAA22F7FA5E6F9C1438A2EB54D483DD ___chaperone_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Chaperone_t_t128A6D49BDAA22F7FA5E6F9C1438A2EB54D483DD ___chaperone_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::performanceTest
			VREvent_PerformanceTest_t_t0478B91BEEF937FD13BDD7874E6D4FF6E0F251CC ___performanceTest_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_PerformanceTest_t_t0478B91BEEF937FD13BDD7874E6D4FF6E0F251CC ___performanceTest_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::touchPadMove
			VREvent_TouchPadMove_t_t35C6D4887E2052939332756FA533218A95E4DFDF ___touchPadMove_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_TouchPadMove_t_t35C6D4887E2052939332756FA533218A95E4DFDF ___touchPadMove_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::seatedZeroPoseReset
			VREvent_SeatedZeroPoseReset_t_tF997206056D5508CD3FCC80CB13909F90795F574 ___seatedZeroPoseReset_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SeatedZeroPoseReset_t_tF997206056D5508CD3FCC80CB13909F90795F574 ___seatedZeroPoseReset_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Screenshot_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::screenshot
			VREvent_Screenshot_t_tF5F0B0B84F4162CDADC47E838BE9750655AC130A ___screenshot_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Screenshot_t_tF5F0B0B84F4162CDADC47E838BE9750655AC130A ___screenshot_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::screenshotProgress
			VREvent_ScreenshotProgress_t_tD2E3AC3CA052EC8104D7E445F0775E8830FABC64 ___screenshotProgress_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ScreenshotProgress_t_tD2E3AC3CA052EC8104D7E445F0775E8830FABC64 ___screenshotProgress_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::applicationLaunch
			VREvent_ApplicationLaunch_t_tA00B0DCC3FA81B8FCE8F63768D3D4BC22506FFAC ___applicationLaunch_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ApplicationLaunch_t_tA00B0DCC3FA81B8FCE8F63768D3D4BC22506FFAC ___applicationLaunch_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::cameraSurface
			VREvent_EditingCameraSurface_t_tAC368FF1C4E2E79BE7DD439B09F4FF0B25802037 ___cameraSurface_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_EditingCameraSurface_t_tAC368FF1C4E2E79BE7DD439B09F4FF0B25802037 ___cameraSurface_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::messageOverlay
			VREvent_MessageOverlay_t_tAC47ACF6779F8A2E493D0856A96F1861347CDD45 ___messageOverlay_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_MessageOverlay_t_tAC47ACF6779F8A2E493D0856A96F1861347CDD45 ___messageOverlay_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t::keyboard
			VREvent_Keyboard_t_t6B74A0B6E2DF05F1DCE9C1AEE25BEB1015B93E85 ___keyboard_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Keyboard_t_t6B74A0B6E2DF05F1DCE9C1AEE25BEB1015B93E85 ___keyboard_18_forAlignmentOnly;
		};
	};
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t
struct VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE 
{
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t::eventType
	uint32_t ___eventType_0;
	// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t::data
	VREvent_Data_t_tC7A47C6B6B27572F81ACB0714A91575989000B08 ___data_3;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Cognitive3D.SensorRecorder/onNewSensorRecorded
struct onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting
struct _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt
struct _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform
struct _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus
struct _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion
struct _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest
struct _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty
struct _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum
struct _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum
struct _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex
struct _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState
struct _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose
struct _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex
struct _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo
struct _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose
struct _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum
struct _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform
struct _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty
struct _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh
struct _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty
struct _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty
struct _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice
struct _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix
struct _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw
struct _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum
struct _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
struct _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize
struct _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
struct _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
struct _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty
struct _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync
struct _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel
struct _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass
struct _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole
struct _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty
struct _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop
struct _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess
struct _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected
struct _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate
struct _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent
struct _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose
struct _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus
struct _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose
struct _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility
struct _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8  : public MulticastDelegate_t
{
};

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse
struct _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Cognitive3D.Cognitive3D_Manager
struct Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.YieldInstruction Cognitive3D.Cognitive3D_Manager::playerSnapshotInverval
	YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___playerSnapshotInverval_6;
	// UnityEngine.YieldInstruction Cognitive3D.Cognitive3D_Manager::automaticSendInterval
	YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___automaticSendInterval_7;
	// UnityEngine.YieldInstruction Cognitive3D.Cognitive3D_Manager::GPSUpdateInverval
	YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___GPSUpdateInverval_8;
	// System.Boolean Cognitive3D.Cognitive3D_Manager::BeginSessionAutomatically
	bool ___BeginSessionAutomatically_10;
	// System.Single Cognitive3D.Cognitive3D_Manager::StartupDelayTime
	float ___StartupDelayTime_11;
	// Cognitive3D.GazeBase Cognitive3D.Cognitive3D_Manager::gazeBase
	GazeBase_t0C7DCE2F75161E58229F7CBEE5E01734CE466715* ___gazeBase_12;
	// Cognitive3D.FixationRecorder Cognitive3D.Cognitive3D_Manager::fixationRecorder
	FixationRecorder_t963BBF18547A3F299BF5D11A8EB2A44C58E75286* ___fixationRecorder_13;
	// System.Boolean Cognitive3D.Cognitive3D_Manager::hasCanceled
	bool ___hasCanceled_14;
};

// Cognitive3D.ActiveSession.SensorCanvas
struct SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Cognitive3D.ActiveSession.SensorCanvas::LineWidth
	float ___LineWidth_4;
	// System.Single Cognitive3D.ActiveSession.SensorCanvas::MaxSensorTimeSpan
	float ___MaxSensorTimeSpan_5;
	// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry[] Cognitive3D.ActiveSession.SensorCanvas::SensorEntries
	SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* ___SensorEntries_6;
	// Cognitive3D.ActiveSession.SensorRenderCamera Cognitive3D.ActiveSession.SensorCanvas::renderCamera
	SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* ___renderCamera_7;
	// System.Reflection.FieldInfo Cognitive3D.ActiveSession.SensorCanvas::canvasHackField
	FieldInfo_t* ___canvasHackField_8;
	// System.Object Cognitive3D.ActiveSession.SensorCanvas::canvasHackObject
	RuntimeObject* ___canvasHackObject_9;
	// System.Single Cognitive3D.ActiveSession.SensorCanvas::RenderDelayFrameCount
	float ___RenderDelayFrameCount_10;
	// System.Int32 Cognitive3D.ActiveSession.SensorCanvas::Mask
	int32_t ___Mask_11;
	// UnityEngine.UI.Text Cognitive3D.ActiveSession.SensorCanvas::MaxTimeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MaxTimeText_12;
	// UnityEngine.UI.Text Cognitive3D.ActiveSession.SensorCanvas::HalfTimeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HalfTimeText_13;
};

// Cognitive3D.ActiveSession.SensorRenderCamera
struct SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cognitive3D.ActiveSession.SensorCanvas Cognitive3D.ActiveSession.SensorRenderCamera::sensorCanvas
	SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* ___sensorCanvas_4;
	// UnityEngine.Camera Cognitive3D.ActiveSession.SensorRenderCamera::<Camera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CCameraU3Ek__BackingField_5;
	// System.Int32 Cognitive3D.ActiveSession.SensorRenderCamera::mask
	int32_t ___mask_6;
	// System.Single Cognitive3D.ActiveSession.SensorRenderCamera::lineWidth
	float ___lineWidth_7;
	// UnityEngine.Color Cognitive3D.ActiveSession.SensorRenderCamera::ColorWhite
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorWhite_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>
struct List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Cognitive3D.SensorRecorder
struct SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Cognitive3D.SensorRecorder/SensorData> Cognitive3D.SensorRecorder::sensorData
	Dictionary_2_tF7FED398F721A15CC6AE45DFD1A919959CB2FBE8* ___sensorData_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> Cognitive3D.SensorRecorder::LastSensorValues
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___LastSensorValues_1;
	// Cognitive3D.SensorRecorder/onNewSensorRecorded Cognitive3D.SensorRecorder::OnNewSensorRecorded
	onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF* ___OnNewSensorRecorded_2;
	// Cognitive3D.Cognitive3D_Manager/onSendData Cognitive3D.SensorRecorder::OnSensorSend
	onSendData_t0282EB454D34C262E5BD2B2B4A5310FEC7A119C5* ___OnSensorSend_3;
};

// Cognitive3D.SensorRecorder

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop

// Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop

// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry

// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t

// Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t

// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t

// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t

// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t

// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t

// Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t

// Cognitive3D.ActiveSession.RenderEyetracking/HmdVector3_t

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem

// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t

// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerAxis_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ApplicationLaunch_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Chaperone_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Chaperone_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Controller_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Controller_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_EditingCameraSurface_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Ipd_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Ipd_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Keyboard_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_MessageOverlay_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Mouse_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Notification_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Notification_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Overlay_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Overlay_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_PerformanceTest_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Process_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Reserved_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Reserved_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_ScreenshotProgress_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Screenshot_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Screenshot_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Scroll_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_SeatedZeroPoseReset_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Status_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Status_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_TouchPadMove_t

// Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint

// Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t42751542FF68E05B811B86529010251C83624A1C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t82E334CDFA4EF59EFA559F72A685C60DD74CA12A ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_0;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem

// Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem

// Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t

// Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t

// Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t

// Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t

// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t

// Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_Data_t

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t

// Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Cognitive3D.SensorRecorder/onNewSensorRecorded

// Cognitive3D.SensorRecorder/onNewSensorRecorded

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse

// Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Cognitive3D.Cognitive3D_Manager
struct Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE_StaticFields
{
	// Cognitive3D.Cognitive3D_Manager Cognitive3D.Cognitive3D_Manager::instance
	Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE* ___instance_5;
	// System.Boolean Cognitive3D.Cognitive3D_Manager::IsQuitting
	bool ___IsQuitting_9;
	// Cognitive3D.Cognitive3D_Manager/onSessionBegin Cognitive3D.Cognitive3D_Manager::OnSessionBegin
	onSessionBegin_t0646E31062FF4162A5DFC8D80A6BD9F411629D2F* ___OnSessionBegin_15;
	// Cognitive3D.Cognitive3D_Manager/onSessionEnd Cognitive3D.Cognitive3D_Manager::OnPreSessionEnd
	onSessionEnd_t915EA4E6751214614BEA0D15BCDBB7EB08DD3D2B* ___OnPreSessionEnd_16;
	// Cognitive3D.Cognitive3D_Manager/onSessionEnd Cognitive3D.Cognitive3D_Manager::OnPostSessionEnd
	onSessionEnd_t915EA4E6751214614BEA0D15BCDBB7EB08DD3D2B* ___OnPostSessionEnd_17;
	// Cognitive3D.Cognitive3D_Manager/onUpdate Cognitive3D.Cognitive3D_Manager::OnUpdate
	onUpdate_t2BD424E898B04A65619C8723008A48001AA22AEB* ___OnUpdate_18;
	// Cognitive3D.Cognitive3D_Manager/onTick Cognitive3D.Cognitive3D_Manager::OnTick
	onTick_tD2B098AEA6A137CC3DB22DC8F33FFB894447281E* ___OnTick_19;
	// Cognitive3D.Cognitive3D_Manager/onQuit Cognitive3D.Cognitive3D_Manager::OnQuit
	onQuit_tF56C01A346DE866EB3C1C1351FC65CA7A9B7AB9E* ___OnQuit_20;
	// Cognitive3D.Cognitive3D_Manager/onLevelLoaded Cognitive3D.Cognitive3D_Manager::OnLevelLoaded
	onLevelLoaded_t374AE522FD2900BA1341086269ADAF045CF1FE28* ___OnLevelLoaded_21;
	// Cognitive3D.ILocalExitpoll Cognitive3D.Cognitive3D_Manager::ExitpollHandler
	RuntimeObject* ___ExitpollHandler_22;
	// Cognitive3D.ICache Cognitive3D.Cognitive3D_Manager::DataCache
	RuntimeObject* ___DataCache_23;
	// Cognitive3D.NetworkManager Cognitive3D.Cognitive3D_Manager::NetworkManager
	NetworkManager_t0C9275F1055DDA110329D3889184ED48B64B58B2* ___NetworkManager_24;
	// System.Boolean Cognitive3D.Cognitive3D_Manager::HasCustomSessionName
	bool ___HasCustomSessionName_25;
	// System.String Cognitive3D.Cognitive3D_Manager::<ParticipantId>k__BackingField
	String_t* ___U3CParticipantIdU3Ek__BackingField_26;
	// System.String Cognitive3D.Cognitive3D_Manager::<ParticipantName>k__BackingField
	String_t* ___U3CParticipantNameU3Ek__BackingField_27;
	// System.String Cognitive3D.Cognitive3D_Manager::_deviceId
	String_t* ____deviceId_28;
	// System.Double Cognitive3D.Cognitive3D_Manager::_timestamp
	double ____timestamp_29;
	// System.String Cognitive3D.Cognitive3D_Manager::_sessionId
	String_t* ____sessionId_30;
	// Cognitive3D.Cognitive3D_Preferences/SceneSettings Cognitive3D.Cognitive3D_Manager::<TrackingScene>k__BackingField
	SceneSettings_t82090968952A9395A09FA25B89B9BFD7C4B87D0A* ___U3CTrackingSceneU3Ek__BackingField_31;
	// System.Single Cognitive3D.Cognitive3D_Manager::SceneStartTime
	float ___SceneStartTime_32;
	// System.Boolean Cognitive3D.Cognitive3D_Manager::ForceWriteSessionMetadata
	bool ___ForceWriteSessionMetadata_33;
	// System.Boolean Cognitive3D.Cognitive3D_Manager::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_34;
};

// Cognitive3D.Cognitive3D_Manager

// Cognitive3D.ActiveSession.SensorCanvas

// Cognitive3D.ActiveSession.SensorCanvas

// Cognitive3D.ActiveSession.SensorRenderCamera

// Cognitive3D.ActiveSession.SensorRenderCamera

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t[]
struct TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D m_Items[1];

	inline TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

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
// Cognitive3D.ActiveSession.SensorCanvas/SensorEntry[]
struct SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C  : public RuntimeArray
{
	ALIGN_FIELD (8) SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* m_Items[1];

	inline SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint[]
struct SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121  : public RuntimeArray
{
	ALIGN_FIELD (8) SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E m_Items[1];

	inline SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFBEC3A5A35B9411AFAAD1638F1411BD5CCB36BF2 Dictionary_2_GetEnumerator_m23E10CDEF2E68F98C343D25144C3147DF52E30B8_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEF4084C044DCA5B357AE6DE52E8C8AE98C8CAD1F_gshared (Enumerator_tFBEC3A5A35B9411AFAAD1638F1411BD5CCB36BF2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE Enumerator_get_Current_m4BB037FEFB35F886088FC522D0C6932B05735A3D_gshared_inline (Enumerator_tFBEC3A5A35B9411AFAAD1638F1411BD5CCB36BF2* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_gshared_inline (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCE65DE5182BFEC156BB5F7CE81DDA920492D2163_gshared (Enumerator_tFBEC3A5A35B9411AFAAD1638F1411BD5CCB36BF2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_gshared (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38_gshared (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_gshared_inline (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65_gshared (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___0_ptr, Type_t* ___1_structureType, const RuntimeMethod* method) ;
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_inline (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Cognitive3D.ActiveSession.SensorRenderCamera::Initialize(Cognitive3D.ActiveSession.SensorCanvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRenderCamera_Initialize_mB43497E8C0761926A6369EE9A1FFED09E1D80655 (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* ___0_canvas, const RuntimeMethod* method) ;
// System.Void Cognitive3D.SensorRecorder/onNewSensorRecorded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onNewSensorRecorded__ctor_m690FA9186E37B7B01BEE69F6F1C540C3C9BFC8AB (onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cognitive3D.SensorRecorder::add_OnNewSensorRecorded(Cognitive3D.SensorRecorder/onNewSensorRecorded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRecorder_add_OnNewSensorRecorded_m9C305706D36E9F31DC01E77C1ACA604D39232C4F (onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetEnumerator()
inline Enumerator_t9DE5961A481A89538702A73B5740544CC7515302 Dictionary_2_GetEnumerator_m49B7A1E8C13D4336DC8A738FA57CB3D1B3123035 (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DE5961A481A89538702A73B5740544CC7515302 (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m23E10CDEF2E68F98C343D25144C3147DF52E30B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>::Dispose()
inline void Enumerator_Dispose_mA3C51A24CCA1AA47FF3E292AB2B151D756B4D86A (Enumerator_t9DE5961A481A89538702A73B5740544CC7515302* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DE5961A481A89538702A73B5740544CC7515302*, const RuntimeMethod*))Enumerator_Dispose_mEF4084C044DCA5B357AE6DE52E8C8AE98C8CAD1F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>::get_Current()
inline KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 Enumerator_get_Current_m137269A891E547F39774573503157D6D4C49E754_inline (Enumerator_t9DE5961A481A89538702A73B5740544CC7515302* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 (*) (Enumerator_t9DE5961A481A89538702A73B5740544CC7515302*, const RuntimeMethod*))Enumerator_get_Current_m4BB037FEFB35F886088FC522D0C6932B05735A3D_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Single>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_inline (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Double Cognitive3D.Util::Timestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Util_Timestamp_mB128191B5B150558B70F22D4CA6DA9CB2556C417 (int32_t ___0_frame, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Single>::get_Value()
inline float KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042* __this, const RuntimeMethod* method)
{
	return ((  float (*) (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline)(__this, method);
}
// System.Void Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint::.ctor(System.Double,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorDataPoint__ctor_m4CFD71ACF90DD71C81969FC6C7B62DF0BE476DCB (SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E* __this, double ___0_time, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::Add(T)
inline void List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_inline (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E, const RuntimeMethod*))List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_gshared_inline)(__this, ___0_item, method);
}
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>::MoveNext()
inline bool Enumerator_MoveNext_m83190B47FEC18F1D290A27C60EFE6608228D3914 (Enumerator_t9DE5961A481A89538702A73B5740544CC7515302* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DE5961A481A89538702A73B5740544CC7515302*, const RuntimeMethod*))Enumerator_MoveNext_mCE65DE5182BFEC156BB5F7CE81DDA920492D2163_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::get_Item(System.Int32)
inline SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269 (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E (*) (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*, int32_t, const RuntimeMethod*))List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38 (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::get_Count()
inline int32_t List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_inline (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*, const RuntimeMethod*))List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_gshared_inline)(__this, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Camera Cognitive3D.ActiveSession.SensorRenderCamera::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SensorRenderCamera_get_Camera_mC3D3014EC6B14D3F15300E5D85FF216FD0604301_inline (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void Cognitive3D.SensorRecorder::remove_OnNewSensorRecorded(Cognitive3D.SensorRecorder/onNewSensorRecorded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRecorder_remove_OnNewSensorRecorded_mF58D7B125C82A07835774CCC0F5F318347259914 (onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint>::.ctor()
inline void List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65 (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*, const RuntimeMethod*))List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Cognitive3D.ActiveSession.SensorRenderCamera::set_Camera(UnityEngine.Camera)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SensorRenderCamera_set_Camera_mDDBBB2E7518D28BF83D027BAA70B635955BAB650_inline (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Double Cognitive3D.Cognitive3D_Manager::get_SessionTimeStamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Cognitive3D_Manager_get_SessionTimeStamp_m4912FC8A1BB1A34465DF39EED3DB23B6A2530F7A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978 (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL VR_InitInternal(int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C void CDECL VR_ShutdownInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL VR_IsHmdPresent();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL VR_IsRuntimeInstalled();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL VR_GetStringForHmdError(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL VR_GetGenericInterface(char*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL VR_IsInterfaceVersionValid(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL VR_GetInitToken();
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRSystem__ctor_mC4B8D89BF705287DEFAD99901B7CF32249372B8A (CVRSystem_t7999085E3758601DA74DE797BA9F105A0FA6EFA2* __this, intptr_t ___0_pInterface, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal CVRSystem(IntPtr pInterface)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// FnTable = (IVRSystem)Marshal.PtrToStructure(pInterface, typeof(IVRSystem));
		intptr_t L_0 = ___0_pInterface;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_0, L_2, NULL);
		__this->___FnTable_0 = ((*(IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D*)((IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D*)(IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D*)UnBox(L_3, IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_il2cpp_TypeInfo_var))));
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetRecommendedRenderTargetSize_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetProjectionMatrix_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetProjectionRaw_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___ComputeDistortion_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetEyeToHeadTransform_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetTimeSinceLastVsync_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetD3D9AdapterIndex_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetDXGIOutputInfo_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetOutputDevice_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___IsDisplayOnDesktop_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___SetDisplayVisibility_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetDeviceToAbsoluteTrackingPose_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___ResetSeatedZeroPose_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetRawZeroPoseToStandingAbsoluteTrackingPose_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetSortedTrackedDeviceIndicesOfClass_15), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetTrackedDeviceActivityLevel_16), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___ApplyTransform_17), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetTrackedDeviceIndexForControllerRole_18), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetControllerRoleForTrackedDeviceIndex_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetTrackedDeviceClass_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___IsTrackedDeviceConnected_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetBoolTrackedDeviceProperty_22), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetFloatTrackedDeviceProperty_23), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetInt32TrackedDeviceProperty_24), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetUint64TrackedDeviceProperty_25), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetMatrix34TrackedDeviceProperty_26), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetStringTrackedDeviceProperty_27), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetPropErrorNameFromEnum_28), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___PollNextEvent_29), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___PollNextEventWithPose_30), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetEventTypeNameFromEnum_31), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetHiddenAreaMesh_32), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetControllerState_33), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetControllerStateWithPose_34), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___TriggerHapticPulse_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetButtonIdNameFromEnum_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___GetControllerAxisTypeNameFromEnum_37), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___CaptureInputFocus_38), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___ReleaseInputFocus_39), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___IsInputFocusCapturedByAnotherProcess_40), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___DriverDebugRequest_41), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___PerformFirmwareUpdate_42), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___AcknowledgeQuit_Exiting_43), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___FnTable_0))->___AcknowledgeQuit_UserPrompt_44), (void*)NULL);
		#endif
		// }
		return;
	}
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t Cognitive3D.ActiveSession.RenderEyetracking/CVRSystem::GetProjectionMatrix(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B CVRSystem_GetProjectionMatrix_mFC3B01E03F11AE4C89E3267669A5F5AA61CEB659 (CVRSystem_t7999085E3758601DA74DE797BA9F105A0FA6EFA2* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method) 
{
	{
		// HmdMatrix44_t result = FnTable.GetProjectionMatrix(eEye, fNearZ, fFarZ);
		IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D* L_0 = (&__this->___FnTable_0);
		_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* L_1 = L_0->___GetProjectionMatrix_1;
		int32_t L_2 = ___0_eEye;
		float L_3 = ___1_fNearZ;
		float L_4 = ___2_fFarZ;
		NullCheck(L_1);
		HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B L_5;
		L_5 = _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_inline(L_1, L_2, L_3, L_4, NULL);
		// return result;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::InitInternal(Cognitive3D.ActiveSession.RenderEyetracking/EVRInitError&,Cognitive3D.ActiveSession.RenderEyetracking/EVRApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVRInterop_InitInternal_m0C1BFAF7ED1B657113E4AEB70A23EDFCDC44437A (int32_t* ___0_peError, int32_t ___1_eApplicationType, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_InitInternal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(VR_InitInternal)(___0_peError, ___1_eApplicationType);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_peError, ___1_eApplicationType);
	#endif

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::ShutdownInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVRInterop_ShutdownInternal_m72CA9D24A3F143037FE4E42622E24593A52A7DB7 (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_ShutdownInternal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	reinterpret_cast<PInvokeFunc>(VR_ShutdownInternal)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::IsHmdPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVRInterop_IsHmdPresent_mDED2CBB9AA71E8AC397ABB1B1AF00DB09453787E (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_IsHmdPresent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(VR_IsHmdPresent)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::IsRuntimeInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVRInterop_IsRuntimeInstalled_m4D146B4ED6896C8611380029F1DF3F14185337B7 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_IsRuntimeInstalled", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(VR_IsRuntimeInstalled)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::GetStringForHmdError(Cognitive3D.ActiveSession.RenderEyetracking/EVRInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenVRInterop_GetStringForHmdError_m947B74DC12DF1A39472E30A04601940FACDA2321 (int32_t ___0_error, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_GetStringForHmdError", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(VR_GetStringForHmdError)(___0_error);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_error);
	#endif

	return returnValue;
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::GetGenericInterface(System.String,Cognitive3D.ActiveSession.RenderEyetracking/EVRInitError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenVRInterop_GetGenericInterface_m7FD788B71ED8B982362A45AF488EF32FB2D18124 (String_t* ___0_pchInterfaceVersion, int32_t* ___1_peError, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_GetGenericInterface", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_pchInterfaceVersion' to native representation
	char* ____0_pchInterfaceVersion_marshaled = NULL;
	____0_pchInterfaceVersion_marshaled = il2cpp_codegen_marshal_string(___0_pchInterfaceVersion);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(VR_GetGenericInterface)(____0_pchInterfaceVersion_marshaled, ___1_peError);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_pchInterfaceVersion_marshaled, ___1_peError);
	#endif

	// Marshaling cleanup of parameter '___0_pchInterfaceVersion' native representation
	il2cpp_codegen_marshal_free(____0_pchInterfaceVersion_marshaled);
	____0_pchInterfaceVersion_marshaled = NULL;

	return returnValue;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::IsInterfaceVersionValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVRInterop_IsInterfaceVersionValid_m2BCB40CED68E0D897934CAE8ABF30043EF03966D (String_t* ___0_pchInterfaceVersion, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_IsInterfaceVersionValid", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_pchInterfaceVersion' to native representation
	char* ____0_pchInterfaceVersion_marshaled = NULL;
	____0_pchInterfaceVersion_marshaled = il2cpp_codegen_marshal_string(___0_pchInterfaceVersion);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(VR_IsInterfaceVersionValid)(____0_pchInterfaceVersion_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_pchInterfaceVersion_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_pchInterfaceVersion' native representation
	il2cpp_codegen_marshal_free(____0_pchInterfaceVersion_marshaled);
	____0_pchInterfaceVersion_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::GetInitToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVRInterop_GetInitToken_mEB866F4770F696F87EEA800F6404449C41AE63C2 (const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_openvr_api_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("openvr_api"), "VR_GetInitToken", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_openvr_api_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(VR_GetInitToken)();
	#else
	uint32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/OpenVRInterop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVRInterop__ctor_mA44FF9EDC00E5D7E0F1ECDE9C4433B2B8604675E (OpenVRInterop_tC887A557B12E809FC4A6A2B823149CF54DFBD956* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
IL2CPP_EXTERN_C void IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshal_pinvoke(const IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D& unmarshaled, IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_pinvoke& marshaled)
{
	marshaled.___GetRecommendedRenderTargetSize_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRecommendedRenderTargetSize_0));
	marshaled.___GetProjectionMatrix_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetProjectionMatrix_1));
	marshaled.___GetProjectionRaw_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetProjectionRaw_2));
	marshaled.___ComputeDistortion_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ComputeDistortion_3));
	marshaled.___GetEyeToHeadTransform_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetEyeToHeadTransform_4));
	marshaled.___GetTimeSinceLastVsync_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTimeSinceLastVsync_5));
	marshaled.___GetD3D9AdapterIndex_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetD3D9AdapterIndex_6));
	marshaled.___GetDXGIOutputInfo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetDXGIOutputInfo_7));
	marshaled.___GetOutputDevice_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetOutputDevice_8));
	marshaled.___IsDisplayOnDesktop_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsDisplayOnDesktop_9));
	marshaled.___SetDisplayVisibility_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetDisplayVisibility_10));
	marshaled.___GetDeviceToAbsoluteTrackingPose_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetDeviceToAbsoluteTrackingPose_11));
	marshaled.___ResetSeatedZeroPose_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ResetSeatedZeroPose_12));
	marshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13));
	marshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14));
	marshaled.___GetSortedTrackedDeviceIndicesOfClass_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetSortedTrackedDeviceIndicesOfClass_15));
	marshaled.___GetTrackedDeviceActivityLevel_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrackedDeviceActivityLevel_16));
	marshaled.___ApplyTransform_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ApplyTransform_17));
	marshaled.___GetTrackedDeviceIndexForControllerRole_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrackedDeviceIndexForControllerRole_18));
	marshaled.___GetControllerRoleForTrackedDeviceIndex_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerRoleForTrackedDeviceIndex_19));
	marshaled.___GetTrackedDeviceClass_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrackedDeviceClass_20));
	marshaled.___IsTrackedDeviceConnected_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsTrackedDeviceConnected_21));
	marshaled.___GetBoolTrackedDeviceProperty_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetBoolTrackedDeviceProperty_22));
	marshaled.___GetFloatTrackedDeviceProperty_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetFloatTrackedDeviceProperty_23));
	marshaled.___GetInt32TrackedDeviceProperty_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetInt32TrackedDeviceProperty_24));
	marshaled.___GetUint64TrackedDeviceProperty_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetUint64TrackedDeviceProperty_25));
	marshaled.___GetMatrix34TrackedDeviceProperty_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMatrix34TrackedDeviceProperty_26));
	marshaled.___GetStringTrackedDeviceProperty_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetStringTrackedDeviceProperty_27));
	marshaled.___GetPropErrorNameFromEnum_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetPropErrorNameFromEnum_28));
	marshaled.___PollNextEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PollNextEvent_29));
	marshaled.___PollNextEventWithPose_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PollNextEventWithPose_30));
	marshaled.___GetEventTypeNameFromEnum_31 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetEventTypeNameFromEnum_31));
	marshaled.___GetHiddenAreaMesh_32 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetHiddenAreaMesh_32));
	marshaled.___GetControllerState_33 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerState_33));
	marshaled.___GetControllerStateWithPose_34 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerStateWithPose_34));
	marshaled.___TriggerHapticPulse_35 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___TriggerHapticPulse_35));
	marshaled.___GetButtonIdNameFromEnum_36 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetButtonIdNameFromEnum_36));
	marshaled.___GetControllerAxisTypeNameFromEnum_37 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerAxisTypeNameFromEnum_37));
	marshaled.___CaptureInputFocus_38 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CaptureInputFocus_38));
	marshaled.___ReleaseInputFocus_39 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ReleaseInputFocus_39));
	marshaled.___IsInputFocusCapturedByAnotherProcess_40 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsInputFocusCapturedByAnotherProcess_40));
	marshaled.___DriverDebugRequest_41 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___DriverDebugRequest_41));
	marshaled.___PerformFirmwareUpdate_42 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PerformFirmwareUpdate_42));
	marshaled.___AcknowledgeQuit_Exiting_43 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AcknowledgeQuit_Exiting_43));
	marshaled.___AcknowledgeQuit_UserPrompt_44 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AcknowledgeQuit_UserPrompt_44));
}
IL2CPP_EXTERN_C void IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshal_pinvoke_back(const IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_pinvoke& marshaled, IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___GetRecommendedRenderTargetSize_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE>(marshaled.___GetRecommendedRenderTargetSize_0, _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRecommendedRenderTargetSize_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE>(marshaled.___GetRecommendedRenderTargetSize_0, _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var));
	unmarshaled.___GetProjectionMatrix_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4>(marshaled.___GetProjectionMatrix_1, _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetProjectionMatrix_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4>(marshaled.___GetProjectionMatrix_1, _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var));
	unmarshaled.___GetProjectionRaw_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD>(marshaled.___GetProjectionRaw_2, _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetProjectionRaw_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD>(marshaled.___GetProjectionRaw_2, _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var));
	unmarshaled.___ComputeDistortion_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A>(marshaled.___ComputeDistortion_3, _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ComputeDistortion_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A>(marshaled.___ComputeDistortion_3, _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var));
	unmarshaled.___GetEyeToHeadTransform_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59>(marshaled.___GetEyeToHeadTransform_4, _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetEyeToHeadTransform_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59>(marshaled.___GetEyeToHeadTransform_4, _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var));
	unmarshaled.___GetTimeSinceLastVsync_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930>(marshaled.___GetTimeSinceLastVsync_5, _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTimeSinceLastVsync_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930>(marshaled.___GetTimeSinceLastVsync_5, _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var));
	unmarshaled.___GetD3D9AdapterIndex_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A>(marshaled.___GetD3D9AdapterIndex_6, _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetD3D9AdapterIndex_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A>(marshaled.___GetD3D9AdapterIndex_6, _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var));
	unmarshaled.___GetDXGIOutputInfo_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2>(marshaled.___GetDXGIOutputInfo_7, _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetDXGIOutputInfo_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2>(marshaled.___GetDXGIOutputInfo_7, _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var));
	unmarshaled.___GetOutputDevice_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0>(marshaled.___GetOutputDevice_8, _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetOutputDevice_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0>(marshaled.___GetOutputDevice_8, _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var));
	unmarshaled.___IsDisplayOnDesktop_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4>(marshaled.___IsDisplayOnDesktop_9, _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsDisplayOnDesktop_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4>(marshaled.___IsDisplayOnDesktop_9, _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var));
	unmarshaled.___SetDisplayVisibility_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8>(marshaled.___SetDisplayVisibility_10, _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetDisplayVisibility_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8>(marshaled.___SetDisplayVisibility_10, _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var));
	unmarshaled.___GetDeviceToAbsoluteTrackingPose_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783>(marshaled.___GetDeviceToAbsoluteTrackingPose_11, _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetDeviceToAbsoluteTrackingPose_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783>(marshaled.___GetDeviceToAbsoluteTrackingPose_11, _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var));
	unmarshaled.___ResetSeatedZeroPose_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149>(marshaled.___ResetSeatedZeroPose_12, _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ResetSeatedZeroPose_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149>(marshaled.___ResetSeatedZeroPose_12, _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var));
	unmarshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD>(marshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13, _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD>(marshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13, _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var));
	unmarshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5>(marshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14, _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5>(marshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14, _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var));
	unmarshaled.___GetSortedTrackedDeviceIndicesOfClass_15 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54>(marshaled.___GetSortedTrackedDeviceIndicesOfClass_15, _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetSortedTrackedDeviceIndicesOfClass_15), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54>(marshaled.___GetSortedTrackedDeviceIndicesOfClass_15, _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrackedDeviceActivityLevel_16 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C>(marshaled.___GetTrackedDeviceActivityLevel_16, _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrackedDeviceActivityLevel_16), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C>(marshaled.___GetTrackedDeviceActivityLevel_16, _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var));
	unmarshaled.___ApplyTransform_17 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5>(marshaled.___ApplyTransform_17, _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ApplyTransform_17), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5>(marshaled.___ApplyTransform_17, _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrackedDeviceIndexForControllerRole_18 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14>(marshaled.___GetTrackedDeviceIndexForControllerRole_18, _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrackedDeviceIndexForControllerRole_18), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14>(marshaled.___GetTrackedDeviceIndexForControllerRole_18, _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerRoleForTrackedDeviceIndex_19 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB>(marshaled.___GetControllerRoleForTrackedDeviceIndex_19, _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerRoleForTrackedDeviceIndex_19), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB>(marshaled.___GetControllerRoleForTrackedDeviceIndex_19, _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrackedDeviceClass_20 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D>(marshaled.___GetTrackedDeviceClass_20, _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrackedDeviceClass_20), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D>(marshaled.___GetTrackedDeviceClass_20, _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var));
	unmarshaled.___IsTrackedDeviceConnected_21 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18>(marshaled.___IsTrackedDeviceConnected_21, _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsTrackedDeviceConnected_21), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18>(marshaled.___IsTrackedDeviceConnected_21, _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var));
	unmarshaled.___GetBoolTrackedDeviceProperty_22 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D>(marshaled.___GetBoolTrackedDeviceProperty_22, _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetBoolTrackedDeviceProperty_22), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D>(marshaled.___GetBoolTrackedDeviceProperty_22, _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var));
	unmarshaled.___GetFloatTrackedDeviceProperty_23 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33>(marshaled.___GetFloatTrackedDeviceProperty_23, _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetFloatTrackedDeviceProperty_23), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33>(marshaled.___GetFloatTrackedDeviceProperty_23, _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var));
	unmarshaled.___GetInt32TrackedDeviceProperty_24 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32>(marshaled.___GetInt32TrackedDeviceProperty_24, _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetInt32TrackedDeviceProperty_24), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32>(marshaled.___GetInt32TrackedDeviceProperty_24, _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var));
	unmarshaled.___GetUint64TrackedDeviceProperty_25 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61>(marshaled.___GetUint64TrackedDeviceProperty_25, _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetUint64TrackedDeviceProperty_25), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61>(marshaled.___GetUint64TrackedDeviceProperty_25, _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var));
	unmarshaled.___GetMatrix34TrackedDeviceProperty_26 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328>(marshaled.___GetMatrix34TrackedDeviceProperty_26, _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMatrix34TrackedDeviceProperty_26), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328>(marshaled.___GetMatrix34TrackedDeviceProperty_26, _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var));
	unmarshaled.___GetStringTrackedDeviceProperty_27 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF>(marshaled.___GetStringTrackedDeviceProperty_27, _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetStringTrackedDeviceProperty_27), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF>(marshaled.___GetStringTrackedDeviceProperty_27, _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var));
	unmarshaled.___GetPropErrorNameFromEnum_28 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB>(marshaled.___GetPropErrorNameFromEnum_28, _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetPropErrorNameFromEnum_28), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB>(marshaled.___GetPropErrorNameFromEnum_28, _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var));
	unmarshaled.___PollNextEvent_29 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709>(marshaled.___PollNextEvent_29, _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PollNextEvent_29), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709>(marshaled.___PollNextEvent_29, _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var));
	unmarshaled.___PollNextEventWithPose_30 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84>(marshaled.___PollNextEventWithPose_30, _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PollNextEventWithPose_30), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84>(marshaled.___PollNextEventWithPose_30, _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var));
	unmarshaled.___GetEventTypeNameFromEnum_31 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD>(marshaled.___GetEventTypeNameFromEnum_31, _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetEventTypeNameFromEnum_31), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD>(marshaled.___GetEventTypeNameFromEnum_31, _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var));
	unmarshaled.___GetHiddenAreaMesh_32 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016>(marshaled.___GetHiddenAreaMesh_32, _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetHiddenAreaMesh_32), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016>(marshaled.___GetHiddenAreaMesh_32, _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerState_33 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7>(marshaled.___GetControllerState_33, _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerState_33), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7>(marshaled.___GetControllerState_33, _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerStateWithPose_34 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4>(marshaled.___GetControllerStateWithPose_34, _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerStateWithPose_34), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4>(marshaled.___GetControllerStateWithPose_34, _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var));
	unmarshaled.___TriggerHapticPulse_35 = il2cpp_codegen_marshal_function_ptr_to_delegate<_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592>(marshaled.___TriggerHapticPulse_35, _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TriggerHapticPulse_35), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592>(marshaled.___TriggerHapticPulse_35, _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var));
	unmarshaled.___GetButtonIdNameFromEnum_36 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4>(marshaled.___GetButtonIdNameFromEnum_36, _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetButtonIdNameFromEnum_36), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4>(marshaled.___GetButtonIdNameFromEnum_36, _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerAxisTypeNameFromEnum_37 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228>(marshaled.___GetControllerAxisTypeNameFromEnum_37, _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerAxisTypeNameFromEnum_37), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228>(marshaled.___GetControllerAxisTypeNameFromEnum_37, _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var));
	unmarshaled.___CaptureInputFocus_38 = il2cpp_codegen_marshal_function_ptr_to_delegate<_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815>(marshaled.___CaptureInputFocus_38, _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CaptureInputFocus_38), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815>(marshaled.___CaptureInputFocus_38, _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var));
	unmarshaled.___ReleaseInputFocus_39 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869>(marshaled.___ReleaseInputFocus_39, _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ReleaseInputFocus_39), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869>(marshaled.___ReleaseInputFocus_39, _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var));
	unmarshaled.___IsInputFocusCapturedByAnotherProcess_40 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0>(marshaled.___IsInputFocusCapturedByAnotherProcess_40, _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsInputFocusCapturedByAnotherProcess_40), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0>(marshaled.___IsInputFocusCapturedByAnotherProcess_40, _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var));
	unmarshaled.___DriverDebugRequest_41 = il2cpp_codegen_marshal_function_ptr_to_delegate<_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199>(marshaled.___DriverDebugRequest_41, _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DriverDebugRequest_41), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199>(marshaled.___DriverDebugRequest_41, _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var));
	unmarshaled.___PerformFirmwareUpdate_42 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE>(marshaled.___PerformFirmwareUpdate_42, _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PerformFirmwareUpdate_42), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE>(marshaled.___PerformFirmwareUpdate_42, _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var));
	unmarshaled.___AcknowledgeQuit_Exiting_43 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39>(marshaled.___AcknowledgeQuit_Exiting_43, _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AcknowledgeQuit_Exiting_43), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39>(marshaled.___AcknowledgeQuit_Exiting_43, _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var));
	unmarshaled.___AcknowledgeQuit_UserPrompt_44 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC>(marshaled.___AcknowledgeQuit_UserPrompt_44, _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AcknowledgeQuit_UserPrompt_44), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC>(marshaled.___AcknowledgeQuit_UserPrompt_44, _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
IL2CPP_EXTERN_C void IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshal_pinvoke_cleanup(IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
IL2CPP_EXTERN_C void IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshal_com(const IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D& unmarshaled, IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_com& marshaled)
{
	marshaled.___GetRecommendedRenderTargetSize_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRecommendedRenderTargetSize_0));
	marshaled.___GetProjectionMatrix_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetProjectionMatrix_1));
	marshaled.___GetProjectionRaw_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetProjectionRaw_2));
	marshaled.___ComputeDistortion_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ComputeDistortion_3));
	marshaled.___GetEyeToHeadTransform_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetEyeToHeadTransform_4));
	marshaled.___GetTimeSinceLastVsync_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTimeSinceLastVsync_5));
	marshaled.___GetD3D9AdapterIndex_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetD3D9AdapterIndex_6));
	marshaled.___GetDXGIOutputInfo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetDXGIOutputInfo_7));
	marshaled.___GetOutputDevice_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetOutputDevice_8));
	marshaled.___IsDisplayOnDesktop_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsDisplayOnDesktop_9));
	marshaled.___SetDisplayVisibility_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetDisplayVisibility_10));
	marshaled.___GetDeviceToAbsoluteTrackingPose_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetDeviceToAbsoluteTrackingPose_11));
	marshaled.___ResetSeatedZeroPose_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ResetSeatedZeroPose_12));
	marshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13));
	marshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14));
	marshaled.___GetSortedTrackedDeviceIndicesOfClass_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetSortedTrackedDeviceIndicesOfClass_15));
	marshaled.___GetTrackedDeviceActivityLevel_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrackedDeviceActivityLevel_16));
	marshaled.___ApplyTransform_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ApplyTransform_17));
	marshaled.___GetTrackedDeviceIndexForControllerRole_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrackedDeviceIndexForControllerRole_18));
	marshaled.___GetControllerRoleForTrackedDeviceIndex_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerRoleForTrackedDeviceIndex_19));
	marshaled.___GetTrackedDeviceClass_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrackedDeviceClass_20));
	marshaled.___IsTrackedDeviceConnected_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsTrackedDeviceConnected_21));
	marshaled.___GetBoolTrackedDeviceProperty_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetBoolTrackedDeviceProperty_22));
	marshaled.___GetFloatTrackedDeviceProperty_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetFloatTrackedDeviceProperty_23));
	marshaled.___GetInt32TrackedDeviceProperty_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetInt32TrackedDeviceProperty_24));
	marshaled.___GetUint64TrackedDeviceProperty_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetUint64TrackedDeviceProperty_25));
	marshaled.___GetMatrix34TrackedDeviceProperty_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMatrix34TrackedDeviceProperty_26));
	marshaled.___GetStringTrackedDeviceProperty_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetStringTrackedDeviceProperty_27));
	marshaled.___GetPropErrorNameFromEnum_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetPropErrorNameFromEnum_28));
	marshaled.___PollNextEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PollNextEvent_29));
	marshaled.___PollNextEventWithPose_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PollNextEventWithPose_30));
	marshaled.___GetEventTypeNameFromEnum_31 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetEventTypeNameFromEnum_31));
	marshaled.___GetHiddenAreaMesh_32 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetHiddenAreaMesh_32));
	marshaled.___GetControllerState_33 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerState_33));
	marshaled.___GetControllerStateWithPose_34 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerStateWithPose_34));
	marshaled.___TriggerHapticPulse_35 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___TriggerHapticPulse_35));
	marshaled.___GetButtonIdNameFromEnum_36 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetButtonIdNameFromEnum_36));
	marshaled.___GetControllerAxisTypeNameFromEnum_37 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetControllerAxisTypeNameFromEnum_37));
	marshaled.___CaptureInputFocus_38 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CaptureInputFocus_38));
	marshaled.___ReleaseInputFocus_39 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ReleaseInputFocus_39));
	marshaled.___IsInputFocusCapturedByAnotherProcess_40 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsInputFocusCapturedByAnotherProcess_40));
	marshaled.___DriverDebugRequest_41 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___DriverDebugRequest_41));
	marshaled.___PerformFirmwareUpdate_42 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PerformFirmwareUpdate_42));
	marshaled.___AcknowledgeQuit_Exiting_43 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AcknowledgeQuit_Exiting_43));
	marshaled.___AcknowledgeQuit_UserPrompt_44 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AcknowledgeQuit_UserPrompt_44));
}
IL2CPP_EXTERN_C void IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshal_com_back(const IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_com& marshaled, IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___GetRecommendedRenderTargetSize_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE>(marshaled.___GetRecommendedRenderTargetSize_0, _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRecommendedRenderTargetSize_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE>(marshaled.___GetRecommendedRenderTargetSize_0, _GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE_il2cpp_TypeInfo_var));
	unmarshaled.___GetProjectionMatrix_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4>(marshaled.___GetProjectionMatrix_1, _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetProjectionMatrix_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4>(marshaled.___GetProjectionMatrix_1, _GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4_il2cpp_TypeInfo_var));
	unmarshaled.___GetProjectionRaw_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD>(marshaled.___GetProjectionRaw_2, _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetProjectionRaw_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD>(marshaled.___GetProjectionRaw_2, _GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD_il2cpp_TypeInfo_var));
	unmarshaled.___ComputeDistortion_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A>(marshaled.___ComputeDistortion_3, _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ComputeDistortion_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A>(marshaled.___ComputeDistortion_3, _ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A_il2cpp_TypeInfo_var));
	unmarshaled.___GetEyeToHeadTransform_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59>(marshaled.___GetEyeToHeadTransform_4, _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetEyeToHeadTransform_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59>(marshaled.___GetEyeToHeadTransform_4, _GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59_il2cpp_TypeInfo_var));
	unmarshaled.___GetTimeSinceLastVsync_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930>(marshaled.___GetTimeSinceLastVsync_5, _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTimeSinceLastVsync_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930>(marshaled.___GetTimeSinceLastVsync_5, _GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930_il2cpp_TypeInfo_var));
	unmarshaled.___GetD3D9AdapterIndex_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A>(marshaled.___GetD3D9AdapterIndex_6, _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetD3D9AdapterIndex_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A>(marshaled.___GetD3D9AdapterIndex_6, _GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A_il2cpp_TypeInfo_var));
	unmarshaled.___GetDXGIOutputInfo_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2>(marshaled.___GetDXGIOutputInfo_7, _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetDXGIOutputInfo_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2>(marshaled.___GetDXGIOutputInfo_7, _GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2_il2cpp_TypeInfo_var));
	unmarshaled.___GetOutputDevice_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0>(marshaled.___GetOutputDevice_8, _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetOutputDevice_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0>(marshaled.___GetOutputDevice_8, _GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0_il2cpp_TypeInfo_var));
	unmarshaled.___IsDisplayOnDesktop_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4>(marshaled.___IsDisplayOnDesktop_9, _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsDisplayOnDesktop_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4>(marshaled.___IsDisplayOnDesktop_9, _IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4_il2cpp_TypeInfo_var));
	unmarshaled.___SetDisplayVisibility_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8>(marshaled.___SetDisplayVisibility_10, _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetDisplayVisibility_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8>(marshaled.___SetDisplayVisibility_10, _SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8_il2cpp_TypeInfo_var));
	unmarshaled.___GetDeviceToAbsoluteTrackingPose_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783>(marshaled.___GetDeviceToAbsoluteTrackingPose_11, _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetDeviceToAbsoluteTrackingPose_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783>(marshaled.___GetDeviceToAbsoluteTrackingPose_11, _GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783_il2cpp_TypeInfo_var));
	unmarshaled.___ResetSeatedZeroPose_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149>(marshaled.___ResetSeatedZeroPose_12, _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ResetSeatedZeroPose_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149>(marshaled.___ResetSeatedZeroPose_12, _ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149_il2cpp_TypeInfo_var));
	unmarshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD>(marshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13, _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD>(marshaled.___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13, _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD_il2cpp_TypeInfo_var));
	unmarshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5>(marshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14, _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5>(marshaled.___GetRawZeroPoseToStandingAbsoluteTrackingPose_14, _GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5_il2cpp_TypeInfo_var));
	unmarshaled.___GetSortedTrackedDeviceIndicesOfClass_15 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54>(marshaled.___GetSortedTrackedDeviceIndicesOfClass_15, _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetSortedTrackedDeviceIndicesOfClass_15), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54>(marshaled.___GetSortedTrackedDeviceIndicesOfClass_15, _GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrackedDeviceActivityLevel_16 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C>(marshaled.___GetTrackedDeviceActivityLevel_16, _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrackedDeviceActivityLevel_16), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C>(marshaled.___GetTrackedDeviceActivityLevel_16, _GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C_il2cpp_TypeInfo_var));
	unmarshaled.___ApplyTransform_17 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5>(marshaled.___ApplyTransform_17, _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ApplyTransform_17), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5>(marshaled.___ApplyTransform_17, _ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrackedDeviceIndexForControllerRole_18 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14>(marshaled.___GetTrackedDeviceIndexForControllerRole_18, _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrackedDeviceIndexForControllerRole_18), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14>(marshaled.___GetTrackedDeviceIndexForControllerRole_18, _GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerRoleForTrackedDeviceIndex_19 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB>(marshaled.___GetControllerRoleForTrackedDeviceIndex_19, _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerRoleForTrackedDeviceIndex_19), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB>(marshaled.___GetControllerRoleForTrackedDeviceIndex_19, _GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrackedDeviceClass_20 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D>(marshaled.___GetTrackedDeviceClass_20, _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrackedDeviceClass_20), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D>(marshaled.___GetTrackedDeviceClass_20, _GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D_il2cpp_TypeInfo_var));
	unmarshaled.___IsTrackedDeviceConnected_21 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18>(marshaled.___IsTrackedDeviceConnected_21, _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsTrackedDeviceConnected_21), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18>(marshaled.___IsTrackedDeviceConnected_21, _IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18_il2cpp_TypeInfo_var));
	unmarshaled.___GetBoolTrackedDeviceProperty_22 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D>(marshaled.___GetBoolTrackedDeviceProperty_22, _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetBoolTrackedDeviceProperty_22), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D>(marshaled.___GetBoolTrackedDeviceProperty_22, _GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D_il2cpp_TypeInfo_var));
	unmarshaled.___GetFloatTrackedDeviceProperty_23 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33>(marshaled.___GetFloatTrackedDeviceProperty_23, _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetFloatTrackedDeviceProperty_23), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33>(marshaled.___GetFloatTrackedDeviceProperty_23, _GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33_il2cpp_TypeInfo_var));
	unmarshaled.___GetInt32TrackedDeviceProperty_24 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32>(marshaled.___GetInt32TrackedDeviceProperty_24, _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetInt32TrackedDeviceProperty_24), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32>(marshaled.___GetInt32TrackedDeviceProperty_24, _GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32_il2cpp_TypeInfo_var));
	unmarshaled.___GetUint64TrackedDeviceProperty_25 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61>(marshaled.___GetUint64TrackedDeviceProperty_25, _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetUint64TrackedDeviceProperty_25), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61>(marshaled.___GetUint64TrackedDeviceProperty_25, _GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61_il2cpp_TypeInfo_var));
	unmarshaled.___GetMatrix34TrackedDeviceProperty_26 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328>(marshaled.___GetMatrix34TrackedDeviceProperty_26, _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMatrix34TrackedDeviceProperty_26), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328>(marshaled.___GetMatrix34TrackedDeviceProperty_26, _GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328_il2cpp_TypeInfo_var));
	unmarshaled.___GetStringTrackedDeviceProperty_27 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF>(marshaled.___GetStringTrackedDeviceProperty_27, _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetStringTrackedDeviceProperty_27), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF>(marshaled.___GetStringTrackedDeviceProperty_27, _GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF_il2cpp_TypeInfo_var));
	unmarshaled.___GetPropErrorNameFromEnum_28 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB>(marshaled.___GetPropErrorNameFromEnum_28, _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetPropErrorNameFromEnum_28), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB>(marshaled.___GetPropErrorNameFromEnum_28, _GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB_il2cpp_TypeInfo_var));
	unmarshaled.___PollNextEvent_29 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709>(marshaled.___PollNextEvent_29, _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PollNextEvent_29), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709>(marshaled.___PollNextEvent_29, _PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709_il2cpp_TypeInfo_var));
	unmarshaled.___PollNextEventWithPose_30 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84>(marshaled.___PollNextEventWithPose_30, _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PollNextEventWithPose_30), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84>(marshaled.___PollNextEventWithPose_30, _PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84_il2cpp_TypeInfo_var));
	unmarshaled.___GetEventTypeNameFromEnum_31 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD>(marshaled.___GetEventTypeNameFromEnum_31, _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetEventTypeNameFromEnum_31), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD>(marshaled.___GetEventTypeNameFromEnum_31, _GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD_il2cpp_TypeInfo_var));
	unmarshaled.___GetHiddenAreaMesh_32 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016>(marshaled.___GetHiddenAreaMesh_32, _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetHiddenAreaMesh_32), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016>(marshaled.___GetHiddenAreaMesh_32, _GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerState_33 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7>(marshaled.___GetControllerState_33, _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerState_33), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7>(marshaled.___GetControllerState_33, _GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerStateWithPose_34 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4>(marshaled.___GetControllerStateWithPose_34, _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerStateWithPose_34), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4>(marshaled.___GetControllerStateWithPose_34, _GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4_il2cpp_TypeInfo_var));
	unmarshaled.___TriggerHapticPulse_35 = il2cpp_codegen_marshal_function_ptr_to_delegate<_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592>(marshaled.___TriggerHapticPulse_35, _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TriggerHapticPulse_35), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592>(marshaled.___TriggerHapticPulse_35, _TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592_il2cpp_TypeInfo_var));
	unmarshaled.___GetButtonIdNameFromEnum_36 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4>(marshaled.___GetButtonIdNameFromEnum_36, _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetButtonIdNameFromEnum_36), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4>(marshaled.___GetButtonIdNameFromEnum_36, _GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4_il2cpp_TypeInfo_var));
	unmarshaled.___GetControllerAxisTypeNameFromEnum_37 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228>(marshaled.___GetControllerAxisTypeNameFromEnum_37, _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetControllerAxisTypeNameFromEnum_37), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228>(marshaled.___GetControllerAxisTypeNameFromEnum_37, _GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228_il2cpp_TypeInfo_var));
	unmarshaled.___CaptureInputFocus_38 = il2cpp_codegen_marshal_function_ptr_to_delegate<_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815>(marshaled.___CaptureInputFocus_38, _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CaptureInputFocus_38), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815>(marshaled.___CaptureInputFocus_38, _CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815_il2cpp_TypeInfo_var));
	unmarshaled.___ReleaseInputFocus_39 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869>(marshaled.___ReleaseInputFocus_39, _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ReleaseInputFocus_39), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869>(marshaled.___ReleaseInputFocus_39, _ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869_il2cpp_TypeInfo_var));
	unmarshaled.___IsInputFocusCapturedByAnotherProcess_40 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0>(marshaled.___IsInputFocusCapturedByAnotherProcess_40, _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsInputFocusCapturedByAnotherProcess_40), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0>(marshaled.___IsInputFocusCapturedByAnotherProcess_40, _IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0_il2cpp_TypeInfo_var));
	unmarshaled.___DriverDebugRequest_41 = il2cpp_codegen_marshal_function_ptr_to_delegate<_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199>(marshaled.___DriverDebugRequest_41, _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DriverDebugRequest_41), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199>(marshaled.___DriverDebugRequest_41, _DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199_il2cpp_TypeInfo_var));
	unmarshaled.___PerformFirmwareUpdate_42 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE>(marshaled.___PerformFirmwareUpdate_42, _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PerformFirmwareUpdate_42), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE>(marshaled.___PerformFirmwareUpdate_42, _PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE_il2cpp_TypeInfo_var));
	unmarshaled.___AcknowledgeQuit_Exiting_43 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39>(marshaled.___AcknowledgeQuit_Exiting_43, _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AcknowledgeQuit_Exiting_43), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39>(marshaled.___AcknowledgeQuit_Exiting_43, _AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39_il2cpp_TypeInfo_var));
	unmarshaled.___AcknowledgeQuit_UserPrompt_44 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC>(marshaled.___AcknowledgeQuit_UserPrompt_44, _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AcknowledgeQuit_UserPrompt_44), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC>(marshaled.___AcknowledgeQuit_UserPrompt_44, _AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem
IL2CPP_EXTERN_C void IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshal_com_cleanup(IVRSystem_tDE448AA2D70B6964FF15E37A554662520E41A69D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_Multicast(_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* currentDelegate = reinterpret_cast<_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t*, uint32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pnWidth, ___1_pnHeight, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_OpenInst(_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint32_t*, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pnWidth, ___1_pnHeight, method);
}
void _GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_OpenStatic(_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint32_t*, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pnWidth, ___1_pnHeight, method);
}
void _GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_OpenStaticInvoker(_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method)
{
	InvokerActionInvoker2< uint32_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pnWidth, ___1_pnHeight);
}
void _GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_ClosedStaticInvoker(_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, uint32_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pnWidth, ___1_pnHeight);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE (_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_pnWidth, ___1_pnHeight);

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRecommendedRenderTargetSize__ctor_m5070A040092DA410076064093BCE6A22DF2D202F (_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::Invoke(System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRecommendedRenderTargetSize_Invoke_m2F002B7644F9015BDB6A7EE0B4F054B3EAE60B84 (_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t*, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pnWidth, ___1_pnHeight, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::BeginInvoke(System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRecommendedRenderTargetSize_BeginInvoke_m854D798FEC73A26746A7BB736BD4E29FC1807AFF (_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___0_pnWidth);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___1_pnHeight);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRecommendedRenderTargetSize::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRecommendedRenderTargetSize_EndInvoke_mC44EB5D8B38F20F2850F4E7B41F08D03240569BA (_GetRecommendedRenderTargetSize_t329E5D5A89CF01D6DA27372D28BBCCCAE3981ECE* __this, uint32_t* ___0_pnWidth, uint32_t* ___1_pnHeight, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pnWidth,
	___1_pnHeight,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_Multicast(_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* currentDelegate = reinterpret_cast<_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4*>(delegatesToInvoke[i]);
		typedef HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eEye, ___1_fNearZ, ___2_fFarZ, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_OpenInst(_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method)
{
	typedef HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B (*FunctionPointerType) (int32_t, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_fNearZ, ___2_fFarZ, method);
}
HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_OpenStatic(_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method)
{
	typedef HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B (*FunctionPointerType) (int32_t, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_fNearZ, ___2_fFarZ, method);
}
HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_OpenStaticInvoker(_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B, int32_t, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eEye, ___1_fNearZ, ___2_fFarZ);
}
HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_ClosedStaticInvoker(_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B, RuntimeObject*, int32_t, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eEye, ___1_fNearZ, ___2_fFarZ);
}
IL2CPP_EXTERN_C  HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B DelegatePInvokeWrapper__GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4 (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method)
{
	typedef HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B (STDCALL *PInvokeFunc)(int32_t, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B returnValue = il2cppPInvokeFunc(___0_eEye, ___1_fNearZ, ___2_fFarZ);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionMatrix__ctor_m222E633925D69876C35A094E3C836AD126E12F4E (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747 (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method) 
{
	typedef HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eEye, ___1_fNearZ, ___2_fFarZ, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetProjectionMatrix_BeginInvoke_m7876FF797AAE3373E6EC68A45A412C30F5EAD707 (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var, &___0_eEye);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_fNearZ);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_fFarZ);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix44_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionMatrix::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_EndInvoke_m9B24F3E3336C14071E36A2E103BBB1F2D7EF3512 (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_Multicast(_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* currentDelegate = reinterpret_cast<_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float*, float*, float*, float*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_OpenInst(_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float*, float*, float*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom, method);
}
void _GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_OpenStatic(_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float*, float*, float*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom, method);
}
void _GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_OpenStaticInvoker(_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method)
{
	InvokerActionInvoker5< int32_t, float*, float*, float*, float* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom);
}
void _GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_ClosedStaticInvoker(_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, int32_t, float*, float*, float*, float* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD (_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, float*, float*, float*, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom);

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionRaw__ctor_mC1F2788DDB398029201E28D4B263ECED8585B2A2 (_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionRaw_Invoke_mC2318D2124125527B99323717D9CD075B37344C6 (_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float*, float*, float*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eEye, ___1_pfLeft, ___2_pfRight, ___3_pfTop, ___4_pfBottom, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single&,System.Single&,System.Single&,System.Single&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetProjectionRaw_BeginInvoke_m691E490C5E6BA71E9A2D3B0065B9954A9124CA23 (_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, int32_t ___0_eEye, float* ___1_pfLeft, float* ___2_pfRight, float* ___3_pfTop, float* ___4_pfBottom, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var, &___0_eEye);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___1_pfLeft);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___2_pfRight);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___3_pfTop);
	__d_args[4] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___4_pfBottom);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetProjectionRaw::EndInvoke(System.Single&,System.Single&,System.Single&,System.Single&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetProjectionRaw_EndInvoke_m00A494FC1E3D659BA15C17DD57120A47115475B9 (_GetProjectionRaw_tCD0F5B600252D966D4B40A86B62FA75442A11BAD* __this, float* ___0_pfLeft, float* ___1_pfRight, float* ___2_pfTop, float* ___3_pfBottom, RuntimeObject* ___4_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pfLeft,
	___1_pfRight,
	___2_pfTop,
	___3_pfBottom,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___4_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_Multicast(_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* currentDelegate = reinterpret_cast<_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_OpenInst(_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates, method);
}
bool _ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_OpenStatic(_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates, method);
}
bool _ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_OpenStaticInvoker(_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< bool, int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates);
}
bool _ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_ClosedStaticInvoker(_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< bool, RuntimeObject*, int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A (_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ComputeDistortion__ctor_m3A755E08553E3F43B82E852000F6286F612BC4B2 (_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single,System.Single,Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ComputeDistortion_Invoke_m7DA5DA659362D8982107A05792D64B2762B8C63F (_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eEye, ___1_fU, ___2_fV, ___3_pDistortionCoordinates, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.Single,System.Single,Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ComputeDistortion_BeginInvoke_mAB8DACB6A382901B51ED4871F97B9863B4984FB5 (_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, int32_t ___0_eEye, float ___1_fU, float ___2_fV, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___3_pDistortionCoordinates, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var, &___0_eEye);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_fU);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_fV);
	__d_args[3] = Box(DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0_il2cpp_TypeInfo_var, &*___3_pDistortionCoordinates);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ComputeDistortion::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/DistortionCoordinates_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ComputeDistortion_EndInvoke_mDEB49C445CABAA70FA36F96F579F3EBEC1AD6C2D (_ComputeDistortion_tE525C1857BF4DB834713027F18CDD9E05681144A* __this, DistortionCoordinates_t_t81699FEF5B782E91960CFDCE30A68848A6D7C1E0* ___0_pDistortionCoordinates, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pDistortionCoordinates,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_Multicast(_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* currentDelegate = reinterpret_cast<_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59*>(delegatesToInvoke[i]);
		typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eEye, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_OpenInst(_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_OpenStatic(_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_OpenStaticInvoker(_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eEye);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_ClosedStaticInvoker(_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eEye);
}
IL2CPP_EXTERN_C  HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 DelegatePInvokeWrapper__GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59 (_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 returnValue = il2cppPInvokeFunc(___0_eEye);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetEyeToHeadTransform__ctor_m96E03FBBC3134CED3CD2A2943DC72757851A92E7 (_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_Invoke_m8B29672FA705F46D80158C3C8B67B3097D348E84 (_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, const RuntimeMethod* method) 
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eEye, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetEyeToHeadTransform_BeginInvoke_m3F84E3A6FF55999515D30F01F683EDB1F3ACCBB9 (_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, int32_t ___0_eEye, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var, &___0_eEye);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEyeToHeadTransform::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetEyeToHeadTransform_EndInvoke_mE7C1F8849BA77C5E987218B1E8D5C45E766CE1BD (_GetEyeToHeadTransform_tA7BDA6E5037853E804161B0EBB5FAEE115B4CF59* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_Multicast(_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* currentDelegate = reinterpret_cast<_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, float*, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_OpenInst(_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (float*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter, method);
}
bool _GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_OpenStatic(_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (float*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter, method);
}
bool _GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_OpenStaticInvoker(_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, float*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter);
}
bool _GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_ClosedStaticInvoker(_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, RuntimeObject*, float*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930 (_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(float*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTimeSinceLastVsync__ctor_mC436EDF62D803A00697D1299B84EC6D6F9C28A91 (_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::Invoke(System.Single&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetTimeSinceLastVsync_Invoke_m4F49F78D93C80E303F918695CB4ABA9E3BA78DE7 (_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pfSecondsSinceLastVsync, ___1_pulFrameCounter, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::BeginInvoke(System.Single&,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTimeSinceLastVsync_BeginInvoke_m601B9A3AECD571D0228A05A3165E278CAE082221 (_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___0_pfSecondsSinceLastVsync);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___1_pulFrameCounter);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTimeSinceLastVsync::EndInvoke(System.Single&,System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetTimeSinceLastVsync_EndInvoke_m8E866BF95F666A6FBA13FEBBF87F811EDE7138A5 (_GetTimeSinceLastVsync_t611DFC1F3FE947239048E913D7A80A31B3006930* __this, float* ___0_pfSecondsSinceLastVsync, uint64_t* ___1_pulFrameCounter, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pfSecondsSinceLastVsync,
	___1_pulFrameCounter,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_Multicast(_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* currentDelegate = reinterpret_cast<_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_OpenInst(_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
int32_t _GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_OpenStatic(_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
int32_t _GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_OpenStaticInvoker(_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< int32_t >::Invoke(__this->___method_ptr_0, method, NULL);
}
int32_t _GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_ClosedStaticInvoker(_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A (_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetD3D9AdapterIndex__ctor_mCD2CE64F205CA9330F394A85E0BC549BC546A809 (_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12_Multicast;
}
// System.Int32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetD3D9AdapterIndex_Invoke_m8CD971B66D96AE64C004413D3EDBBA0602E6BA12 (_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetD3D9AdapterIndex_BeginInvoke_m08CB76970F0AF70D1741796D6B1FE51943E930C4 (_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Int32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetD3D9AdapterIndex::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetD3D9AdapterIndex_EndInvoke_m487B4759C6F86A4EB2E7C68EBC70314956ECC425 (_GetD3D9AdapterIndex_t67B82E02C809A8643A248AEB581A21D6877AB66A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_Multicast(_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* currentDelegate = reinterpret_cast<_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pnAdapterIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_OpenInst(_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pnAdapterIndex, method);
}
void _GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_OpenStatic(_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pnAdapterIndex, method);
}
void _GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_OpenStaticInvoker(_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pnAdapterIndex);
}
void _GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_ClosedStaticInvoker(_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pnAdapterIndex);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2 (_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_pnAdapterIndex);

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetDXGIOutputInfo__ctor_m62F905C97E36516B172D874B677FB8BC3C25CAB9 (_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo::Invoke(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetDXGIOutputInfo_Invoke_mED53854E8EAE24193337FE2217362DCB915FFDF7 (_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pnAdapterIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo::BeginInvoke(System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetDXGIOutputInfo_BeginInvoke_mF7168BD99CF5908B4216E85907CA36C2DD397138 (_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &*___0_pnAdapterIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDXGIOutputInfo::EndInvoke(System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetDXGIOutputInfo_EndInvoke_m9F6692CE2E9955CA51944ABE2F37E052AAE1A6D0 (_GetDXGIOutputInfo_tFD959CC962F7DDD3BC3CACDC291D524BDDB494B2* __this, int32_t* ___0_pnAdapterIndex, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pnAdapterIndex,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_Multicast(_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* currentDelegate = reinterpret_cast<_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pnDevice, ___1_textureType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_OpenInst(_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint64_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pnDevice, ___1_textureType, method);
}
void _GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_OpenStatic(_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint64_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pnDevice, ___1_textureType, method);
}
void _GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_OpenStaticInvoker(_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method)
{
	InvokerActionInvoker2< uint64_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pnDevice, ___1_textureType);
}
void _GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_ClosedStaticInvoker(_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, uint64_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pnDevice, ___1_textureType);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0 (_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint64_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_pnDevice, ___1_textureType);

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetOutputDevice__ctor_m2417379ECF404E1994BA48E53FF0B2F62A7372AF (_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice::Invoke(System.UInt64&,Cognitive3D.ActiveSession.RenderEyetracking/ETextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetOutputDevice_Invoke_m92859285979341B192D9099C38747AE4A4F0C0C7 (_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pnDevice, ___1_textureType, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice::BeginInvoke(System.UInt64&,Cognitive3D.ActiveSession.RenderEyetracking/ETextureType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetOutputDevice_BeginInvoke_m57A9B41FAF027D3EA4D8537FACFB10495865EEE2 (_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, int32_t ___1_textureType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETextureType_tB8D86FF50400D93ACCD584BC778CA1CB4DF74014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___0_pnDevice);
	__d_args[1] = Box(ETextureType_tB8D86FF50400D93ACCD584BC778CA1CB4DF74014_il2cpp_TypeInfo_var, &___1_textureType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetOutputDevice::EndInvoke(System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetOutputDevice_EndInvoke_mA66BAE4D2029E059A6F2818CEDA07028E7B8230F (_GetOutputDevice_tAFD1F007C4ABD691BB7414D0767AB0EA59BD78C0* __this, uint64_t* ___0_pnDevice, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pnDevice,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_Multicast(_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* currentDelegate = reinterpret_cast<_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_OpenInst(_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool _IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_OpenStatic(_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool _IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_OpenStaticInvoker(_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool _IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_ClosedStaticInvoker(_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4 (_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsDisplayOnDesktop__ctor_m8DC9A6F4BF619DC384AE5B408B452D7FBD8E8175 (_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsDisplayOnDesktop_Invoke_m294C798B541DA31DD19ABE587715B3E80E1C1B21 (_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsDisplayOnDesktop_BeginInvoke_m2BAE7D4CCD80568CE159AE901B25D705952607B5 (_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsDisplayOnDesktop::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsDisplayOnDesktop_EndInvoke_m9A1DFAB09F5581B035A04B873F90AF279F612546 (_IsDisplayOnDesktop_tB76133FF58FD4D6A33E681B98A19C2915368CBE4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_Multicast(_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* currentDelegate = reinterpret_cast<_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_bIsVisibleOnDesktop, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_OpenInst(_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_bIsVisibleOnDesktop, method);
}
bool _SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_OpenStatic(_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_bIsVisibleOnDesktop, method);
}
bool _SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_OpenStaticInvoker(_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_bIsVisibleOnDesktop);
}
bool _SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_ClosedStaticInvoker(_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_bIsVisibleOnDesktop);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8 (_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___0_bIsVisibleOnDesktop));

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetDisplayVisibility__ctor_m41154491895C5F512F0BAD6924660422A40D13B7 (_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SetDisplayVisibility_Invoke_m98D33036D0AB696309260E7613B033D21A618B0D (_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_bIsVisibleOnDesktop, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetDisplayVisibility_BeginInvoke_m6EBC8612189774715AE27BA0DBC769C627D03535 (_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, bool ___0_bIsVisibleOnDesktop, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_bIsVisibleOnDesktop);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_SetDisplayVisibility::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SetDisplayVisibility_EndInvoke_mF4D26F576127A452146C8DF056550945C8E8DA24 (_SetDisplayVisibility_t415F4A2A62946329A3A43EFE28722E57C013CEF8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_Multicast(_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* currentDelegate = reinterpret_cast<_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ___2_pTrackedDevicePoseArray, ___3_unTrackedDevicePoseArrayCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_OpenInst(_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ___2_pTrackedDevicePoseArray, ___3_unTrackedDevicePoseArrayCount, method);
}
void _GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_OpenStatic(_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ___2_pTrackedDevicePoseArray, ___3_unTrackedDevicePoseArrayCount, method);
}
void _GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_OpenStaticInvoker(_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, float, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ___2_pTrackedDevicePoseArray, ___3_unTrackedDevicePoseArrayCount);
}
void _GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_ClosedStaticInvoker(_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, float, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ___2_pTrackedDevicePoseArray, ___3_unTrackedDevicePoseArrayCount);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783 (_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, float, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___2_pTrackedDevicePoseArray' to native representation
	TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ____2_pTrackedDevicePoseArray_marshaled = NULL;
	if (___2_pTrackedDevicePoseArray != NULL)
	{
		____2_pTrackedDevicePoseArray_marshaled = reinterpret_cast<TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*>((___2_pTrackedDevicePoseArray)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ____2_pTrackedDevicePoseArray_marshaled, ___3_unTrackedDevicePoseArrayCount);

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetDeviceToAbsoluteTrackingPose__ctor_m9E38D732871F836E83F9F423C67126904482F055 (_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,System.Single,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetDeviceToAbsoluteTrackingPose_Invoke_mFDA9DECC3331D800DC842211CA589CAC7E94A595 (_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eOrigin, ___1_fPredictedSecondsToPhotonsFromNow, ___2_pTrackedDevicePoseArray, ___3_unTrackedDevicePoseArrayCount, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,System.Single,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t[],System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetDeviceToAbsoluteTrackingPose_BeginInvoke_mF541465708CDA7B631B108C8B4014525250DA22C (_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, int32_t ___0_eOrigin, float ___1_fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_tU5BU5D_tA5B5A9EF468F98036FE2BA7227E47D5456F8BC9F* ___2_pTrackedDevicePoseArray, uint32_t ___3_unTrackedDevicePoseArrayCount, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var, &___0_eOrigin);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_fPredictedSecondsToPhotonsFromNow);
	__d_args[2] = ___2_pTrackedDevicePoseArray;
	__d_args[3] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___3_unTrackedDevicePoseArrayCount);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetDeviceToAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetDeviceToAbsoluteTrackingPose_EndInvoke_m6318927F65586E6ECB5E2022E2E16EEDB14B4E7D (_GetDeviceToAbsoluteTrackingPose_t44C5C51916DED7679C71201CCABC45FED4E8A783* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_Multicast(_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* currentDelegate = reinterpret_cast<_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_OpenInst(_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_OpenStatic(_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_OpenStaticInvoker(_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void _ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_ClosedStaticInvoker(_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149 (_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ResetSeatedZeroPose__ctor_mAEEDEF8C6A985BCA6030E88F7E95D0F52E905085 (_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ResetSeatedZeroPose_Invoke_m04D719480714D4737DAC260F36047F2B6C4ACA31 (_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ResetSeatedZeroPose_BeginInvoke_m93A1F2925EFA7FA2532F53DFB0BA396844059DFB (_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ResetSeatedZeroPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ResetSeatedZeroPose_EndInvoke_mECC96526F7CCB56FE4076CD07B1B194959AC71F6 (_ResetSeatedZeroPose_t508D27BF572BC19E329DA8BC0ADAB583FC17F149* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_Multicast(_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* currentDelegate = reinterpret_cast<_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD*>(delegatesToInvoke[i]);
		typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_OpenInst(_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_OpenStatic(_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_OpenStaticInvoker(_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 >::Invoke(__this->___method_ptr_0, method, NULL);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_ClosedStaticInvoker(_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 DelegatePInvokeWrapper__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetSeatedZeroPoseToStandingAbsoluteTrackingPose__ctor_mB2563130586CED115E3CE5B195A00AC2D4185694 (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m4C45E4DE033B4A46E2FCC19FC9ADDE87A9FE5FFA (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, const RuntimeMethod* method) 
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_mFFED9E85221EA1EBF067CF4583DE34A17C721F01 (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_m384A837DF39B5768A54CE7EA0FF2920BC2B914DA (_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tC9291D037CCC2AB2149D1AB65BCC533FE5F07FFD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_Multicast(_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* currentDelegate = reinterpret_cast<_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5*>(delegatesToInvoke[i]);
		typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_OpenInst(_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_OpenStatic(_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_OpenStaticInvoker(_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 >::Invoke(__this->___method_ptr_0, method, NULL);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_ClosedStaticInvoker(_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 DelegatePInvokeWrapper__GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5 (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRawZeroPoseToStandingAbsoluteTrackingPose__ctor_m5CDA7297003558690EF446D875E327AAE3CC0625 (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m98E52E67E6140D14908E5F88D0CD90EE0A38093C (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, const RuntimeMethod* method) 
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRawZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_m8DC100F49E9D05A37E763E1066859A37D4D480EE (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetRawZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_m4B32C55F5DA851083D51A80FE25B12C4BB1EF09A (_GetRawZeroPoseToStandingAbsoluteTrackingPose_tB19A992355471E78B21E6EFBC9F6C486771F23D5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_Multicast(_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* currentDelegate = reinterpret_cast<_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, int32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, uint32_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eTrackedDeviceClass, ___1_punTrackedDeviceIndexArray, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_OpenInst(_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (int32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eTrackedDeviceClass, ___1_punTrackedDeviceIndexArray, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex, method);
}
uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_OpenStatic(_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (int32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eTrackedDeviceClass, ___1_punTrackedDeviceIndexArray, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex, method);
}
uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_OpenStaticInvoker(_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< uint32_t, int32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, uint32_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eTrackedDeviceClass, ___1_punTrackedDeviceIndexArray, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex);
}
uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_ClosedStaticInvoker(_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uint32_t, RuntimeObject*, int32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, uint32_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eTrackedDeviceClass, ___1_punTrackedDeviceIndexArray, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54 (_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(int32_t, uint32_t*, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_punTrackedDeviceIndexArray' to native representation
	uint32_t* ____1_punTrackedDeviceIndexArray_marshaled = NULL;
	if (___1_punTrackedDeviceIndexArray != NULL)
	{
		____1_punTrackedDeviceIndexArray_marshaled = reinterpret_cast<uint32_t*>((___1_punTrackedDeviceIndexArray)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_eTrackedDeviceClass, ____1_punTrackedDeviceIndexArray_marshaled, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetSortedTrackedDeviceIndicesOfClass__ctor_mCEF51E90A240DFEFE77CD13513F60E3E65CC1868 (_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F_Multicast;
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceClass,System.UInt32[],System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetSortedTrackedDeviceIndicesOfClass_Invoke_m6E59CA87079408F5EBC1B00DD3563DC83E412D8F (_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, int32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eTrackedDeviceClass, ___1_punTrackedDeviceIndexArray, ___2_unTrackedDeviceIndexArrayCount, ___3_unRelativeToTrackedDeviceIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceClass,System.UInt32[],System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetSortedTrackedDeviceIndicesOfClass_BeginInvoke_m393BD003527140F082E79741A47661C7AF354458 (_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, int32_t ___0_eTrackedDeviceClass, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_punTrackedDeviceIndexArray, uint32_t ___2_unTrackedDeviceIndexArrayCount, uint32_t ___3_unRelativeToTrackedDeviceIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceClass_t528102180B6DF9B20D6B0879581194DF0350D1A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(ETrackedDeviceClass_t528102180B6DF9B20D6B0879581194DF0350D1A9_il2cpp_TypeInfo_var, &___0_eTrackedDeviceClass);
	__d_args[1] = ___1_punTrackedDeviceIndexArray;
	__d_args[2] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___2_unTrackedDeviceIndexArrayCount);
	__d_args[3] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___3_unRelativeToTrackedDeviceIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetSortedTrackedDeviceIndicesOfClass_EndInvoke_m5935BCC29E63CCAF263A308A7817376E47E435D0 (_GetSortedTrackedDeviceIndicesOfClass_t537C0840660FF586F4B259243958ACEF69138B54* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_Multicast(_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* currentDelegate = reinterpret_cast<_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_OpenInst(_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceId, method);
}
int32_t _GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_OpenStatic(_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceId, method);
}
int32_t _GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_OpenStaticInvoker(_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceId);
}
int32_t _GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_ClosedStaticInvoker(_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceId);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C (_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceId);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrackedDeviceActivityLevel__ctor_mFB0AB626DDDB3523477288CFACC48C5E8093F88B (_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/EDeviceActivityLevel Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceActivityLevel_Invoke_m8ABAE4C126F2AF75BB328FC9A298D7C1A114C295 (_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrackedDeviceActivityLevel_BeginInvoke_m51255643541C76F1360B19C5C5413B336B92474A (_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, uint32_t ___0_unDeviceId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceId);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/EDeviceActivityLevel Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceActivityLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceActivityLevel_EndInvoke_m21D9AE781CE34C31979E117DAFCE4A3AC2890962 (_GetTrackedDeviceActivityLevel_t7176F990CE1C6C327E00601B2F078263D9FDC87C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_Multicast(_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* currentDelegate = reinterpret_cast<_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_OpenInst(_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform, method);
}
void _ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_OpenStatic(_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform, method);
}
void _ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_OpenStaticInvoker(_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method)
{
	InvokerActionInvoker3< TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform);
}
void _ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_ClosedStaticInvoker(_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5 (_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform);

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ApplyTransform__ctor_mBA8547C3EB5755C980E4865821355ADC882C5292 (_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ApplyTransform_Invoke_mA43C9BE753643E9D52EA9E690142A6B79FD80426 (_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pOutputPose, ___1_pTrackedDevicePose, ___2_pTransform, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ApplyTransform_BeginInvoke_m740AE13B8D6D48E8F8EB4C386FF67588123A332B (_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var, &*___0_pOutputPose);
	__d_args[1] = Box(TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var, &*___1_pTrackedDevicePose);
	__d_args[2] = Box(HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755_il2cpp_TypeInfo_var, &*___2_pTransform);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ApplyTransform::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ApplyTransform_EndInvoke_mA0DF773398C4B853171FCFAE4C7A1BF74BD7BA29 (_ApplyTransform_tC4ECD746C05C4079DED0249F0F652C2FF14B70F5* __this, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___0_pOutputPose, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755* ___2_pTransform, RuntimeObject* ___3_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pOutputPose,
	___1_pTrackedDevicePose,
	___2_pTransform,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___3_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_Multicast(_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* currentDelegate = reinterpret_cast<_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_OpenInst(_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceType, method);
}
uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_OpenStatic(_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceType, method);
}
uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_OpenStaticInvoker(_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceType);
}
uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_ClosedStaticInvoker(_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceType);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14 (_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_unDeviceType);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrackedDeviceIndexForControllerRole__ctor_m356C80AD490D3862B66FD9870B3946A332CCC874 (_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1_Multicast;
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedControllerRole)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetTrackedDeviceIndexForControllerRole_Invoke_m1AEAA0999168499E1C693FDF7B02F836C883A6D1 (_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceType, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedControllerRole,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrackedDeviceIndexForControllerRole_BeginInvoke_mE4345E64AB390B8E341291BD7C6B686D5F8AAE50 (_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, int32_t ___0_unDeviceType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedControllerRole_t51DF0EFFEB5D4D7774CE80E5A2B65FDCB1414DA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ETrackedControllerRole_t51DF0EFFEB5D4D7774CE80E5A2B65FDCB1414DA3_il2cpp_TypeInfo_var, &___0_unDeviceType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceIndexForControllerRole::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetTrackedDeviceIndexForControllerRole_EndInvoke_m632210C8F9416CECD35018954E0EEA7F79A1248E (_GetTrackedDeviceIndexForControllerRole_tEF08C54895A1A337FFC2B7BC439AE2178857FC14* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_Multicast(_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* currentDelegate = reinterpret_cast<_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_OpenInst(_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
int32_t _GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_OpenStatic(_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
int32_t _GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_OpenStaticInvoker(_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex);
}
int32_t _GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_ClosedStaticInvoker(_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB (_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetControllerRoleForTrackedDeviceIndex__ctor_m3964BF359F8A7E22303F115721F2362A43C328DD (_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/ETrackedControllerRole Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetControllerRoleForTrackedDeviceIndex_Invoke_mD72556F2805264DE7FDFBD791867292B851E8267 (_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetControllerRoleForTrackedDeviceIndex_BeginInvoke_mB37D5A6C218474BA42BA393762E449A559542D4A (_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, uint32_t ___0_unDeviceIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/ETrackedControllerRole Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerRoleForTrackedDeviceIndex::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetControllerRoleForTrackedDeviceIndex_EndInvoke_m63993CF24B708D9362C241BB81E3A3E3A7EC0459 (_GetControllerRoleForTrackedDeviceIndex_tF4A78622E00C30EF06165A70D7B9D0DFA42977FB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_Multicast(_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* currentDelegate = reinterpret_cast<_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_OpenInst(_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
int32_t _GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_OpenStatic(_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
int32_t _GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_OpenStaticInvoker(_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex);
}
int32_t _GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_ClosedStaticInvoker(_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D (_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrackedDeviceClass__ctor_m8E31AB8D232201FE373CCF020E5B0AC1CEDC96FA (_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceClass Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceClass_Invoke_mF986872AD5A9FB554FFFD0CA1F0259E8D218597C (_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrackedDeviceClass_BeginInvoke_mF33079C3F373BF2930993D9B13DD01FB5757DB62 (_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, uint32_t ___0_unDeviceIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceClass Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetTrackedDeviceClass::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrackedDeviceClass_EndInvoke_mDEE4752FEB3E633F5BC03E347054E33C6848C53F (_GetTrackedDeviceClass_t753D8364CAE0DA9CC629B76F11B10A9FA90A932D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_Multicast(_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* currentDelegate = reinterpret_cast<_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_OpenInst(_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
bool _IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_OpenStatic(_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
bool _IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_OpenStaticInvoker(_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex);
}
bool _IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_ClosedStaticInvoker(_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18 (_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsTrackedDeviceConnected__ctor_m20CB8EA0C5266B84AF91DDB51712B9F3162898FA (_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsTrackedDeviceConnected_Invoke_m5697590FDAB3F86FAAD68CC86FD32AAD49764ABF (_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsTrackedDeviceConnected_BeginInvoke_mF2774B69CB6446B9C7C24DA22F264BC2FD08BFBB (_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, uint32_t ___0_unDeviceIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsTrackedDeviceConnected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsTrackedDeviceConnected_EndInvoke_m434A5479CBCFF8A574B07F3DBDE58F293F4EAAC7 (_IsTrackedDeviceConnected_tC81C93FCB1A34186B76D41171A6AF2411CE11E18* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_Multicast(_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* currentDelegate = reinterpret_cast<_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_OpenInst(_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
bool _GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_OpenStatic(_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
bool _GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_OpenStaticInvoker(_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
bool _GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_ClosedStaticInvoker(_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< bool, RuntimeObject*, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D (_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ___1_prop, ___2_pError);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetBoolTrackedDeviceProperty__ctor_mA86B6D0999FEFB10F5DEBEC17CCD648317F22072 (_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetBoolTrackedDeviceProperty_Invoke_mBBF32D612ABC2E3B91759A71A919ED37591FE71F (_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetBoolTrackedDeviceProperty_BeginInvoke_m2D5B0633E0BB14E5150ED1CFA0BC2B9D0EFA818B (_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = Box(ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var, &___1_prop);
	__d_args[2] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &*___2_pError);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetBoolTrackedDeviceProperty::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetBoolTrackedDeviceProperty_EndInvoke_m14E3B908BB6CBCE05547C3B190B32942025EFB85 (_GetBoolTrackedDeviceProperty_tA534E0B3381B1F6C35E2D83D31B8D371CCF7A58D* __this, int32_t* ___0_pError, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pError,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float _GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_Multicast(_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* currentDelegate = reinterpret_cast<_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float _GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_OpenInst(_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
float _GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_OpenStatic(_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
float _GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_OpenStaticInvoker(_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
float _GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_ClosedStaticInvoker(_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper__GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33 (_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef float (STDCALL *PInvokeFunc)(uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ___1_prop, ___2_pError);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetFloatTrackedDeviceProperty__ctor_mC20A243EF12D0F9BF887720A2864FE70136BB92E (_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0_Multicast;
}
// System.Single Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _GetFloatTrackedDeviceProperty_Invoke_m1108696FAC11F1272842CB080FC35D78D29F28D0 (_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetFloatTrackedDeviceProperty_BeginInvoke_mECC0EFE84759BAEECAA69B9C6232E2A1A1FB1DC5 (_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = Box(ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var, &___1_prop);
	__d_args[2] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &*___2_pError);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Single Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetFloatTrackedDeviceProperty::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _GetFloatTrackedDeviceProperty_EndInvoke_mF113E91131ABC2C3D0964EC55F03129FB71C0363 (_GetFloatTrackedDeviceProperty_t421FF49316482B94FB5C80EB446EEC1EC745DF33* __this, int32_t* ___0_pError, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pError,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_Multicast(_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* currentDelegate = reinterpret_cast<_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_OpenInst(_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
int32_t _GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_OpenStatic(_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
int32_t _GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_OpenStaticInvoker(_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
int32_t _GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_ClosedStaticInvoker(_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32 (_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ___1_prop, ___2_pError);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetInt32TrackedDeviceProperty__ctor_m27E142468E2C2654EA7DF9AAAF7BFE3E54496F1E (_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1_Multicast;
}
// System.Int32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetInt32TrackedDeviceProperty_Invoke_m34314C08BCF7EB157F3F7C81EEA5466906B7DFE1 (_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetInt32TrackedDeviceProperty_BeginInvoke_m9B8785DAD936F656A870BFA16273170F1971EB51 (_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = Box(ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var, &___1_prop);
	__d_args[2] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &*___2_pError);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Int32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetInt32TrackedDeviceProperty::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetInt32TrackedDeviceProperty_EndInvoke_mBDF1401B5AFB11F6A8E20168E433995378B0BEA5 (_GetInt32TrackedDeviceProperty_tD55BD0A40733BD06E8A0A83F9063FC4CA36BAE32* __this, int32_t* ___0_pError, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pError,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint64_t _GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_Multicast(_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint64_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* currentDelegate = reinterpret_cast<_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61*>(delegatesToInvoke[i]);
		typedef uint64_t (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint64_t _GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_OpenInst(_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef uint64_t (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
uint64_t _GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_OpenStatic(_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef uint64_t (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
uint64_t _GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_OpenStaticInvoker(_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< uint64_t, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
uint64_t _GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_ClosedStaticInvoker(_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< uint64_t, RuntimeObject*, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
IL2CPP_EXTERN_C  uint64_t DelegatePInvokeWrapper__GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61 (_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef uint64_t (STDCALL *PInvokeFunc)(uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint64_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ___1_prop, ___2_pError);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetUint64TrackedDeviceProperty__ctor_m86AE87A58435E5B3FF8A27F316025A2CFD8D8EA8 (_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718_Multicast;
}
// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _GetUint64TrackedDeviceProperty_Invoke_m7EAF7C395EB73E593C796BC0F4F0E7A0A7201718 (_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method) 
{
	typedef uint64_t (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetUint64TrackedDeviceProperty_BeginInvoke_m56F94F0EA8EF3B5AD146D6EAD74B990DFE72B249 (_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = Box(ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var, &___1_prop);
	__d_args[2] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &*___2_pError);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.UInt64 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetUint64TrackedDeviceProperty::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _GetUint64TrackedDeviceProperty_EndInvoke_mF76E668D9872D16067B01FFE150B1BCEA5A8EFC7 (_GetUint64TrackedDeviceProperty_tC443791A1F2165FACA6080E1C3E6106C51AEDB61* __this, int32_t* ___0_pError, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pError,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(uint64_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_Multicast(_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* currentDelegate = reinterpret_cast<_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328*>(delegatesToInvoke[i]);
		typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_OpenInst(_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_OpenStatic(_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pError, method);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_OpenStaticInvoker(_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_ClosedStaticInvoker(_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755, RuntimeObject*, uint32_t, int32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_prop, ___2_pError);
}
IL2CPP_EXTERN_C  HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 DelegatePInvokeWrapper__GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328 (_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method)
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (STDCALL *PInvokeFunc)(uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ___1_prop, ___2_pError);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMatrix34TrackedDeviceProperty__ctor_m9B0C185C4AADEE3A2647798565D695029E5A987D (_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_Invoke_m21437347D6F8A2228255EDBED9F8508ED597CEDE (_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, const RuntimeMethod* method) 
{
	typedef HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pError, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetMatrix34TrackedDeviceProperty_BeginInvoke_m81FB9E5F76ABCBBFE619FA25161847BBDF3E3723 (_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, int32_t* ___2_pError, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = Box(ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var, &___1_prop);
	__d_args[2] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &*___2_pError);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/HmdMatrix34_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetMatrix34TrackedDeviceProperty::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755 _GetMatrix34TrackedDeviceProperty_EndInvoke_mB49C1CB84EE30C6B3ECC30FCF0919A2F3E1D2AE9 (_GetMatrix34TrackedDeviceProperty_tBAF838A4CE2B38E301F72F176AF819FB1D8B2328* __this, int32_t* ___0_pError, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pError,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(HmdMatrix34_t_t0A0815D8533D4BCBA8E7545F868A88DC0A261755*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_Multicast(_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* currentDelegate = reinterpret_cast<_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, StringBuilder_t*, uint32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pchValue, ___3_unBufferSize, ___4_pError, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_OpenInst(_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (uint32_t, int32_t, StringBuilder_t*, uint32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pchValue, ___3_unBufferSize, ___4_pError, method);
}
uint32_t _GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_OpenStatic(_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (uint32_t, int32_t, StringBuilder_t*, uint32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_prop, ___2_pchValue, ___3_unBufferSize, ___4_pError, method);
}
uint32_t _GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_OpenStaticInvoker(_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uint32_t, uint32_t, int32_t, StringBuilder_t*, uint32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_prop, ___2_pchValue, ___3_unBufferSize, ___4_pError);
}
uint32_t _GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_ClosedStaticInvoker(_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< uint32_t, RuntimeObject*, uint32_t, int32_t, StringBuilder_t*, uint32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_prop, ___2_pchValue, ___3_unBufferSize, ___4_pError);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF (_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(uint32_t, int32_t, char*, uint32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___2_pchValue' to native representation
	char* ____2_pchValue_marshaled = NULL;
	____2_pchValue_marshaled = il2cpp_codegen_marshal_string_builder(___2_pchValue);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ___1_prop, ____2_pchValue_marshaled, ___3_unBufferSize, ___4_pError);

	// Marshaling of parameter '___2_pchValue' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___2_pchValue, ____2_pchValue_marshaled);

	// Marshaling cleanup of parameter '___2_pchValue' native representation
	il2cpp_codegen_marshal_free(____2_pchValue_marshaled);
	____2_pchValue_marshaled = NULL;

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetStringTrackedDeviceProperty__ctor_mDDC5FD84EF02000DD374A90B4A67DED96EF823EF (_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F_Multicast;
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetStringTrackedDeviceProperty_Invoke_m0B74BC69DE19FCB0A3CCBB4A4DBE32723A7C919F (_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, int32_t, StringBuilder_t*, uint32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_prop, ___2_pchValue, ___3_unBufferSize, ___4_pError, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetStringTrackedDeviceProperty_BeginInvoke_m9E6639BF1CB54425C3DA3F6523F68C5CD5628365 (_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, uint32_t ___0_unDeviceIndex, int32_t ___1_prop, StringBuilder_t* ___2_pchValue, uint32_t ___3_unBufferSize, int32_t* ___4_pError, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = Box(ETrackedDeviceProperty_t5DC808974596A08A357278006BF4D5A0C178FE4E_il2cpp_TypeInfo_var, &___1_prop);
	__d_args[2] = ___2_pchValue;
	__d_args[3] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___3_unBufferSize);
	__d_args[4] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &*___4_pError);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetStringTrackedDeviceProperty::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _GetStringTrackedDeviceProperty_EndInvoke_mCCF78E73111D61EDE8A916007DDF35FECF637454 (_GetStringTrackedDeviceProperty_t6873F04E5B622922955523EA060F6491E28DB6DF* __this, int32_t* ___0_pError, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pError,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t _GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_Multicast(_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* currentDelegate = reinterpret_cast<_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t _GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_OpenInst(_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_error, method);
}
intptr_t _GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_OpenStatic(_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_error, method);
}
intptr_t _GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_OpenStaticInvoker(_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_error);
}
intptr_t _GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_ClosedStaticInvoker(_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_error);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper__GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB (_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_error);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetPropErrorNameFromEnum__ctor_mD834E0A2076A8E5061D2E9CD8C49F0EB0C11F282 (_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075_Multicast;
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetPropErrorNameFromEnum_Invoke_m5D4FCB7F0509DE1653CBCE0E9701CE6034B72075 (_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackedPropertyError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetPropErrorNameFromEnum_BeginInvoke_mFED7471CF268011083F7C993C05FFB2A32B26653 (_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, int32_t ___0_error, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ETrackedPropertyError_tEEAEC3BBFB6E68B21DEA1C08E7CAB0EF156ACA0D_il2cpp_TypeInfo_var, &___0_error);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetPropErrorNameFromEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetPropErrorNameFromEnum_EndInvoke_mFCA85F5A9AA1EB4FCFCC49837B51BD44F33DD0D5 (_GetPropErrorNameFromEnum_t3581C9A997C107E695CB73F7A9D23F94884957CB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_Multicast(_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* currentDelegate = reinterpret_cast<_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pEvent, ___1_uncbVREvent, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_OpenInst(_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pEvent, ___1_uncbVREvent, method);
}
bool _PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_OpenStatic(_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pEvent, ___1_uncbVREvent, method);
}
bool _PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_OpenStaticInvoker(_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_pEvent, ___1_uncbVREvent);
}
bool _PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_ClosedStaticInvoker(_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, RuntimeObject*, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pEvent, ___1_uncbVREvent);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709 (_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pEvent, ___1_uncbVREvent);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PollNextEvent__ctor_m0C7104BF2B40EECBBB17E5FE0099A114572B7E57 (_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEvent_Invoke_m93AA7727104E1820303EB43CA99CD8FD176AF4F6 (_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pEvent, ___1_uncbVREvent, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PollNextEvent_BeginInvoke_m603970CFD0EE622C5F7AC1432682CF8E07E0B362 (_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, uint32_t ___1_uncbVREvent, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE_il2cpp_TypeInfo_var, &*___0_pEvent);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___1_uncbVREvent);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEvent::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEvent_EndInvoke_mF9239FE51FB0BFCE15B720CFC38F8C9952276FFB (_PollNextEvent_tEF3D39CCADC8BA0B96C74E62D1873CFB202C4709* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pEvent,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_Multicast(_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* currentDelegate = reinterpret_cast<_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_OpenInst(_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose, method);
}
bool _PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_OpenStatic(_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose, method);
}
bool _PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_OpenStaticInvoker(_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< bool, int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose);
}
bool _PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_ClosedStaticInvoker(_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< bool, RuntimeObject*, int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84 (_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PollNextEventWithPose__ctor_m80A5B938E906BBEA12DAD2B4A3E471B90B0C2F11 (_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEventWithPose_Invoke_m18A5CE719373B361744AF4318518A649B6D9D6D3 (_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eOrigin, ___1_pEvent, ___2_uncbVREvent, ___3_pTrackedDevicePose, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t&,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PollNextEventWithPose_BeginInvoke_mECCA20A5570E3C0FAEDB90D2D0AE9CA728937AF0 (_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, int32_t ___0_eOrigin, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___1_pEvent, uint32_t ___2_uncbVREvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___3_pTrackedDevicePose, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var, &___0_eOrigin);
	__d_args[1] = Box(VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE_il2cpp_TypeInfo_var, &*___1_pEvent);
	__d_args[2] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___2_uncbVREvent);
	__d_args[3] = Box(TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var, &*___3_pTrackedDevicePose);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PollNextEventWithPose::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/VREvent_t&,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _PollNextEventWithPose_EndInvoke_m2CA5F3AC6077343E55A1E8FBD0936564EABC7851 (_PollNextEventWithPose_t2F448A3186B09EFC797C52B8FC45517FA1362C84* __this, VREvent_t_tB5B88D3BA99C472F2FE62CDAAD295BE0862464BE* ___0_pEvent, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pEvent,
	___1_pTrackedDevicePose,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t _GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_Multicast(_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* currentDelegate = reinterpret_cast<_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t _GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_OpenInst(_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eType, method);
}
intptr_t _GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_OpenStatic(_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eType, method);
}
intptr_t _GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_OpenStaticInvoker(_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eType);
}
intptr_t _GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_ClosedStaticInvoker(_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eType);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper__GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD (_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_eType);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetEventTypeNameFromEnum__ctor_m836223C161729B854A0E9570F4F81F5FA17B1C20 (_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7_Multicast;
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetEventTypeNameFromEnum_Invoke_m604CF0B8855BB7F4712601085E7CDCFD63A416B7 (_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eType, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREventType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetEventTypeNameFromEnum_BeginInvoke_mA265B2F7C46853BB938E65FE680FC070762A5879 (_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, int32_t ___0_eType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREventType_t72CBD8174E40D324959CB52E2CD05CECD69F2307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(EVREventType_t72CBD8174E40D324959CB52E2CD05CECD69F2307_il2cpp_TypeInfo_var, &___0_eType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetEventTypeNameFromEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetEventTypeNameFromEnum_EndInvoke_m1CC1CE0128B6F7619E72A738600193BAC13BB484 (_GetEventTypeNameFromEnum_tC4823C0D3EA358F14C4E97048236555807D6E9FD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_Multicast(_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* currentDelegate = reinterpret_cast<_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016*>(delegatesToInvoke[i]);
		typedef HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eEye, ___1_type, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_OpenInst(_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method)
{
	typedef HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_type, method);
}
HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_OpenStatic(_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method)
{
	typedef HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eEye, ___1_type, method);
}
HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_OpenStaticInvoker(_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eEye, ___1_type);
}
HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_ClosedStaticInvoker(_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B, RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eEye, ___1_type);
}
IL2CPP_EXTERN_C  HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B DelegatePInvokeWrapper__GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016 (_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method)
{
	typedef HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B (STDCALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B returnValue = il2cppPInvokeFunc(___0_eEye, ___1_type);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetHiddenAreaMesh__ctor_m41D31762FC0D44E7C492296112298A28AA4F75DA (_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,Cognitive3D.ActiveSession.RenderEyetracking/EHiddenAreaMeshType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_Invoke_m92385FD85E79FB1CACA833505767B5C07368A676 (_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, const RuntimeMethod* method) 
{
	typedef HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eEye, ___1_type, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVREye,Cognitive3D.ActiveSession.RenderEyetracking/EHiddenAreaMeshType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetHiddenAreaMesh_BeginInvoke_mCFDFC6530594B21ADB799850555DAA2047E01C62 (_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, int32_t ___0_eEye, int32_t ___1_type, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EHiddenAreaMeshType_t178A8ABCAED06B967D301EA9D582D1D29FAC216E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EVREye_t7815BC4ED94D494356CD3C6B7299D0AEE7BA70E6_il2cpp_TypeInfo_var, &___0_eEye);
	__d_args[1] = Box(EHiddenAreaMeshType_t178A8ABCAED06B967D301EA9D582D1D29FAC216E_il2cpp_TypeInfo_var, &___1_type);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/HiddenAreaMesh_t Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetHiddenAreaMesh::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B _GetHiddenAreaMesh_EndInvoke_mE51B0688BE46CE03D7CA8190745C3590320D63CA (_GetHiddenAreaMesh_t1792E9D6E526EF5E3E47481B7A42D6688B78A016* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(HiddenAreaMesh_t_t96FCDC1AEACDA6E43668E3297C222CBD1F59A20B*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_Multicast(_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* currentDelegate = reinterpret_cast<_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_OpenInst(_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize, method);
}
bool _GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_OpenStatic(_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize, method);
}
bool _GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_OpenStaticInvoker(_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize);
}
bool _GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_ClosedStaticInvoker(_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< bool, RuntimeObject*, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7 (_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetControllerState__ctor_m7EEED514935C8474EE812F4F01062565FBE6993C (_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState::Invoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetControllerState_Invoke_mBB472DFD174BF150F7E1C1C01FFD36F056C4E677 (_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unControllerDeviceIndex, ___1_pControllerState, ___2_unControllerStateSize, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState::BeginInvoke(System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t&,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetControllerState_BeginInvoke_m67CD188B7EACBA82571308514BDAB9BAC9E2314D (_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, uint32_t ___0_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___1_pControllerState, uint32_t ___2_unControllerStateSize, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unControllerDeviceIndex);
	__d_args[1] = Box(VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771_il2cpp_TypeInfo_var, &*___1_pControllerState);
	__d_args[2] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___2_unControllerStateSize);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerState::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetControllerState_EndInvoke_m8F72A7496A250FBCAF2C1525B176CA573717F71F (_GetControllerState_t852BAD3DB74191408B12CFBCF2CD01C3FA7124A7* __this, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___0_pControllerState, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pControllerState,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_Multicast(_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* currentDelegate = reinterpret_cast<_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_OpenInst(_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose, method);
}
bool _GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_OpenStatic(_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose, method);
}
bool _GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_OpenStaticInvoker(_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< bool, int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose);
}
bool _GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_ClosedStaticInvoker(_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< bool, RuntimeObject*, int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4 (_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose);

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetControllerStateWithPose__ctor_mA5F9B0ED35084FD8286475C269CC165CCC2E6A7E (_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t&,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetControllerStateWithPose_Invoke_m0A9A0D48542737E95DD6611D520825EE770A45A1 (_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, uint32_t, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771*, uint32_t, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eOrigin, ___1_unControllerDeviceIndex, ___2_pControllerState, ___3_unControllerStateSize, ___4_pTrackedDevicePose, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/ETrackingUniverseOrigin,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t&,System.UInt32,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetControllerStateWithPose_BeginInvoke_m8C0ABB807741858582202271E66947A887C5D28F (_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, int32_t ___0_eOrigin, uint32_t ___1_unControllerDeviceIndex, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___2_pControllerState, uint32_t ___3_unControllerStateSize, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___4_pTrackedDevicePose, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(ETrackingUniverseOrigin_t1B559F93D73069AFD8FEF880430267E3C430C4F1_il2cpp_TypeInfo_var, &___0_eOrigin);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___1_unControllerDeviceIndex);
	__d_args[2] = Box(VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771_il2cpp_TypeInfo_var, &*___2_pControllerState);
	__d_args[3] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___3_unControllerStateSize);
	__d_args[4] = Box(TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D_il2cpp_TypeInfo_var, &*___4_pTrackedDevicePose);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerStateWithPose::EndInvoke(Cognitive3D.ActiveSession.RenderEyetracking/VRControllerState_t&,Cognitive3D.ActiveSession.RenderEyetracking/TrackedDevicePose_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _GetControllerStateWithPose_EndInvoke_m85C68D869361C17217CDB9F55E9D6E1A04AED722 (_GetControllerStateWithPose_t056FE345158B27F8DD8784D4CD5F918F7486CBD4* __this, VRControllerState_t_t90C648695E7F150DFC43E0A1B307B81697BD8771* ___0_pControllerState, TrackedDevicePose_t_t7722E0E890F7B5BFF320FAE31BC1D8438843805D* ___1_pTrackedDevicePose, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_pControllerState,
	___1_pTrackedDevicePose,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_Multicast(_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* currentDelegate = reinterpret_cast<_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unControllerDeviceIndex, ___1_unAxisId, ___2_usDurationMicroSec, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_OpenInst(_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_unControllerDeviceIndex, ___1_unAxisId, ___2_usDurationMicroSec, method);
}
void _TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_OpenStatic(_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_unControllerDeviceIndex, ___1_unAxisId, ___2_usDurationMicroSec, method);
}
void _TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_OpenStaticInvoker(_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method)
{
	InvokerActionInvoker3< uint32_t, uint32_t, Il2CppChar >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unControllerDeviceIndex, ___1_unAxisId, ___2_usDurationMicroSec);
}
void _TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_ClosedStaticInvoker(_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, uint32_t, uint32_t, Il2CppChar >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unControllerDeviceIndex, ___1_unAxisId, ___2_usDurationMicroSec);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592 (_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint32_t, uint32_t, uint8_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_unControllerDeviceIndex, ___1_unAxisId, static_cast<uint8_t>(___2_usDurationMicroSec));

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TriggerHapticPulse__ctor_m71C5CC78A0A3D8B8F2E2313EF3AAA90CBF04DDD1 (_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::Invoke(System.UInt32,System.UInt32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TriggerHapticPulse_Invoke_m3E6C862600B2B93C0B1F3E21213D54BE56EC62E0 (_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, uint32_t, Il2CppChar, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unControllerDeviceIndex, ___1_unAxisId, ___2_usDurationMicroSec, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::BeginInvoke(System.UInt32,System.UInt32,System.Char,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TriggerHapticPulse_BeginInvoke_mC6E135590A8D88EC34AB5E955CC9C2818BCA34B5 (_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, uint32_t ___0_unControllerDeviceIndex, uint32_t ___1_unAxisId, Il2CppChar ___2_usDurationMicroSec, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unControllerDeviceIndex);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___1_unAxisId);
	__d_args[2] = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &___2_usDurationMicroSec);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_TriggerHapticPulse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TriggerHapticPulse_EndInvoke_m16FB214C4A63084488B5BEE220FD6B9621FCFC76 (_TriggerHapticPulse_tE4E03D970FFC857CB95E72552BE61708E3FB9592* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t _GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_Multicast(_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* currentDelegate = reinterpret_cast<_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eButtonId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t _GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_OpenInst(_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eButtonId, method);
}
intptr_t _GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_OpenStatic(_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eButtonId, method);
}
intptr_t _GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_OpenStaticInvoker(_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eButtonId);
}
intptr_t _GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_ClosedStaticInvoker(_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eButtonId);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper__GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4 (_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_eButtonId);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetButtonIdNameFromEnum__ctor_m7486D970ED66CE812A18740E568D665885083A64 (_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB_Multicast;
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVRButtonId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetButtonIdNameFromEnum_Invoke_mB774B5EE08CB6CB316DFF8F301E6E840AB9D51EB (_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eButtonId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVRButtonId,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetButtonIdNameFromEnum_BeginInvoke_m7FA01772F914EE11617E2997C2BB2A5D1E0C8149 (_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, int32_t ___0_eButtonId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVRButtonId_tFC8771DDA2FC473F3C06962326E3E861FF011CC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(EVRButtonId_tFC8771DDA2FC473F3C06962326E3E861FF011CC1_il2cpp_TypeInfo_var, &___0_eButtonId);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetButtonIdNameFromEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetButtonIdNameFromEnum_EndInvoke_mCF64894B33A2FEBC765B5B54BABBE69D68ED5C06 (_GetButtonIdNameFromEnum_t8D591AB52725350AEB646F46657A24DAC6B5B0E4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t _GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_Multicast(_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* currentDelegate = reinterpret_cast<_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eAxisType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t _GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_OpenInst(_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eAxisType, method);
}
intptr_t _GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_OpenStatic(_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_eAxisType, method);
}
intptr_t _GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_OpenStaticInvoker(_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eAxisType);
}
intptr_t _GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_ClosedStaticInvoker(_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eAxisType);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper__GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228 (_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_eAxisType);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetControllerAxisTypeNameFromEnum__ctor_m9770D3F3DF40C679FDC977BAB7B5771CEAA6BE5F (_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139_Multicast;
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum::Invoke(Cognitive3D.ActiveSession.RenderEyetracking/EVRControllerAxisType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetControllerAxisTypeNameFromEnum_Invoke_m9E15FB1A4CBE94CB06D4749BD66A91BC987E6139 (_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eAxisType, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum::BeginInvoke(Cognitive3D.ActiveSession.RenderEyetracking/EVRControllerAxisType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetControllerAxisTypeNameFromEnum_BeginInvoke_m8484CBEC13DCA8A32FD39F5E31626D2C5CB5ED63 (_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, int32_t ___0_eAxisType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVRControllerAxisType_t1E1ECA548E7451DFFD438B6DA442F465185214B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(EVRControllerAxisType_t1E1ECA548E7451DFFD438B6DA442F465185214B4_il2cpp_TypeInfo_var, &___0_eAxisType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_GetControllerAxisTypeNameFromEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _GetControllerAxisTypeNameFromEnum_EndInvoke_mB29CB62EC3E5D8A1E526C97B2D7DE80B3490296B (_GetControllerAxisTypeNameFromEnum_t746C78508A8A9ACD91591153F1B37E6179E07228* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_Multicast(_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* currentDelegate = reinterpret_cast<_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_OpenInst(_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool _CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_OpenStatic(_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool _CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_OpenStaticInvoker(_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool _CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_ClosedStaticInvoker(_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815 (_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CaptureInputFocus__ctor_m7EF3B3E98284BD6A73C056606332E59BA213BC05 (_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _CaptureInputFocus_Invoke_mF63AA62606D8949587DB9444FBC9C3FB575820EA (_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CaptureInputFocus_BeginInvoke_m5439242F0C818C9E0F749C16A817B9AD6D97323A (_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_CaptureInputFocus::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _CaptureInputFocus_EndInvoke_m035DE75F81B2AA84FDDF10AB4C3E71522544E6CB (_CaptureInputFocus_t3DDE279DAC402FEEF363BAD415FE6DF550E83815* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_Multicast(_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* currentDelegate = reinterpret_cast<_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_OpenInst(_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_OpenStatic(_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_OpenStaticInvoker(_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void _ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_ClosedStaticInvoker(_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869 (_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReleaseInputFocus__ctor_m1C2E7D1B33500C6883C7C2DFB30572A92BB3591C (_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReleaseInputFocus_Invoke_m33C2CF9C64390CBDBA444A632FF863431628AB0B (_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReleaseInputFocus_BeginInvoke_m605699D47FAAED93D49DC439757B3E0642A9A335 (_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_ReleaseInputFocus::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReleaseInputFocus_EndInvoke_m849C820AEE3723B7298386EC83B1E633B8809C6C (_ReleaseInputFocus_t7D2135E18238B2FBDFD9CA99596B8CC2A9A97869* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool _IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_Multicast(_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* currentDelegate = reinterpret_cast<_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool _IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_OpenInst(_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool _IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_OpenStatic(_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool _IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_OpenStaticInvoker(_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool _IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_ClosedStaticInvoker(_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper__IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0 (_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsInputFocusCapturedByAnotherProcess__ctor_mFEF5E14E13342DE3671CE935D584232AC1D1C4C6 (_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14_Multicast;
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsInputFocusCapturedByAnotherProcess_Invoke_m54FD5CB75FF97709186702A8E4FF09288A87BE14 (_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsInputFocusCapturedByAnotherProcess_BeginInvoke_m20C9A8C0B375F390A58A8F20A967396F80636C83 (_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Boolean Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_IsInputFocusCapturedByAnotherProcess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _IsInputFocusCapturedByAnotherProcess_EndInvoke_m27B083133396007B2BE237B2B46FDB8049AAD253 (_IsInputFocusCapturedByAnotherProcess_tA706998A3E2CAC2E5648D3A9ACFD9C1AF7EE8FE0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_Multicast(_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* currentDelegate = reinterpret_cast<_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, String_t*, String_t*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, ___1_pchRequest, ___2_pchResponseBuffer, ___3_unResponseBufferSize, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_OpenInst(_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (uint32_t, String_t*, String_t*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_pchRequest, ___2_pchResponseBuffer, ___3_unResponseBufferSize, method);
}
uint32_t _DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_OpenStatic(_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (uint32_t, String_t*, String_t*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, ___1_pchRequest, ___2_pchResponseBuffer, ___3_unResponseBufferSize, method);
}
uint32_t _DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_OpenStaticInvoker(_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< uint32_t, uint32_t, String_t*, String_t*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex, ___1_pchRequest, ___2_pchResponseBuffer, ___3_unResponseBufferSize);
}
uint32_t _DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_ClosedStaticInvoker(_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uint32_t, RuntimeObject*, uint32_t, String_t*, String_t*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex, ___1_pchRequest, ___2_pchResponseBuffer, ___3_unResponseBufferSize);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199 (_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method)
{
	typedef uint32_t (STDCALL *PInvokeFunc)(uint32_t, char*, char*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_pchRequest' to native representation
	char* ____1_pchRequest_marshaled = NULL;
	____1_pchRequest_marshaled = il2cpp_codegen_marshal_string(___1_pchRequest);

	// Marshaling of parameter '___2_pchResponseBuffer' to native representation
	char* ____2_pchResponseBuffer_marshaled = NULL;
	____2_pchResponseBuffer_marshaled = il2cpp_codegen_marshal_string(___2_pchResponseBuffer);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex, ____1_pchRequest_marshaled, ____2_pchResponseBuffer_marshaled, ___3_unResponseBufferSize);

	// Marshaling cleanup of parameter '___1_pchRequest' native representation
	il2cpp_codegen_marshal_free(____1_pchRequest_marshaled);
	____1_pchRequest_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_pchResponseBuffer' native representation
	il2cpp_codegen_marshal_free(____2_pchResponseBuffer_marshaled);
	____2_pchResponseBuffer_marshaled = NULL;

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _DriverDebugRequest__ctor_mBF36037A66512B24C242C1FD5419816343AD1D93 (_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567_Multicast;
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest::Invoke(System.UInt32,System.String,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _DriverDebugRequest_Invoke_m20C408D1C203D7B0770836C4FAD02C8A36CF5567 (_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, String_t*, String_t*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, ___1_pchRequest, ___2_pchResponseBuffer, ___3_unResponseBufferSize, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest::BeginInvoke(System.UInt32,System.String,System.String,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DriverDebugRequest_BeginInvoke_mC4E9021FB77D413908A28175D6DCEB6B31F75893 (_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, uint32_t ___0_unDeviceIndex, String_t* ___1_pchRequest, String_t* ___2_pchResponseBuffer, uint32_t ___3_unResponseBufferSize, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	__d_args[1] = ___1_pchRequest;
	__d_args[2] = ___2_pchResponseBuffer;
	__d_args[3] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___3_unResponseBufferSize);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.UInt32 Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_DriverDebugRequest::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _DriverDebugRequest_EndInvoke_m89FC7DE90A554D215245FCB7EBE421161394106A (_DriverDebugRequest_t16B898747DA0149CD365DAC3A19E42ACF680F199* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_Multicast(_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* currentDelegate = reinterpret_cast<_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_OpenInst(_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
int32_t _PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_OpenStatic(_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_unDeviceIndex, method);
}
int32_t _PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_OpenStaticInvoker(_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_unDeviceIndex);
}
int32_t _PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_ClosedStaticInvoker(_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_unDeviceIndex);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE (_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_unDeviceIndex);

	return returnValue;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PerformFirmwareUpdate__ctor_m063AF1B7194CC8732090B14EFF500E3FBB4F602F (_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D_Multicast;
}
// Cognitive3D.ActiveSession.RenderEyetracking/EVRFirmwareError Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _PerformFirmwareUpdate_Invoke_m02550BAAE5EA34427C553FFFC1CDC5E9B6D7629D (_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_unDeviceIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PerformFirmwareUpdate_BeginInvoke_m044E47CD9CBB3D84C1484BA6D9214E89DA403FD9 (_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, uint32_t ___0_unDeviceIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___0_unDeviceIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Cognitive3D.ActiveSession.RenderEyetracking/EVRFirmwareError Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_PerformFirmwareUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _PerformFirmwareUpdate_EndInvoke_m1FE516157CFDB105BFB4CF4D426F093FD88D78A7 (_PerformFirmwareUpdate_t9D17074093F333832CCCEE2172C9EA9E2FC13BBE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_Multicast(_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* currentDelegate = reinterpret_cast<_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_OpenInst(_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_OpenStatic(_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_OpenStaticInvoker(_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void _AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_ClosedStaticInvoker(_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39 (_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AcknowledgeQuit_Exiting__ctor_mB4B84155BF07AF36D1E79B60D121687441439793 (_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AcknowledgeQuit_Exiting_Invoke_m4F1904A22F9681C23CB4AEB41272EAFE2BA9DBC4 (_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AcknowledgeQuit_Exiting_BeginInvoke_m303E3D2474E965C4A6D382D82B61E69FE8DF5FC2 (_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_Exiting::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AcknowledgeQuit_Exiting_EndInvoke_m4D7EB485296FD5794872277A3B98468CC5FF0E40 (_AcknowledgeQuit_Exiting_t9AF29D66DFBED42698AC52D9E76FA77110DCFB39* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_Multicast(_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* currentDelegate = reinterpret_cast<_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_OpenInst(_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_OpenStatic(_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void _AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_OpenStaticInvoker(_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void _AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_ClosedStaticInvoker(_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC (_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AcknowledgeQuit_UserPrompt__ctor_mCFC64EDB699E27CC7F939C59344CBFB397C1382F (_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704_Multicast;
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AcknowledgeQuit_UserPrompt_Invoke_m9DC30385C0C29AFE4031A8C6B82E68A5B6622704 (_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AcknowledgeQuit_UserPrompt_BeginInvoke_mCEA31F0F2AF66685C9E5F7A3B80445A6FB79827E (_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Cognitive3D.ActiveSession.RenderEyetracking/IVRSystem/_AcknowledgeQuit_UserPrompt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AcknowledgeQuit_UserPrompt_EndInvoke_mE440255A2A84C9010CBDA7FB72536C33BC2085B7 (_AcknowledgeQuit_UserPrompt_t984C85A3899AC86A979FD80A5463B4B1CF8D7ADC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cognitive3D.ActiveSession.SensorCanvas::SetTimespan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorCanvas_SetTimespan_m8CF77EF057ABBC89F71068A26A164AD772890539 (SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* __this, float ___0_maxTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E9780DCDBFF9B8C927445DD8A9345156F7DD9C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float halfTime = maxTime / 2;
		float L_0 = ___0_maxTime;
		V_0 = ((float)(L_0/(2.0f)));
		// MaxTimeText.text = Mathf.RoundToInt(maxTime).ToString() + " seconds ago";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___MaxTimeText_12;
		float L_2 = ___0_maxTime;
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_2, NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral23E9780DCDBFF9B8C927445DD8A9345156F7DD9C, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// HalfTimeText.text = Mathf.RoundToInt(halfTime).ToString() + " seconds ago";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___HalfTimeText_13;
		float L_7 = V_0;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_7, NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral23E9780DCDBFF9B8C927445DD8A9345156F7DD9C, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorCanvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorCanvas_Start_mA9032DAAAF7D3D6E172B881BF053E769514A29E3 (SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SensorCanvas_SensorRecorder_OnNewSensorRecorded_mDFE9A87A1DD0E53BA02BAB6140B0F88843B6AAB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5314E6368487A4939609EEEBC098F322B7696355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// renderCamera.Initialize(this);
		SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* L_0 = __this->___renderCamera_7;
		NullCheck(L_0);
		SensorRenderCamera_Initialize_mB43497E8C0761926A6369EE9A1FFED09E1D80655(L_0, __this, NULL);
		// SensorRecorder.OnNewSensorRecorded += SensorRecorder_OnNewSensorRecorded;
		onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF* L_1 = (onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF*)il2cpp_codegen_object_new(onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		onNewSensorRecorded__ctor_m690FA9186E37B7B01BEE69F6F1C540C3C9BFC8AB(L_1, __this, (intptr_t)((void*)SensorCanvas_SensorRecorder_OnNewSensorRecorded_mDFE9A87A1DD0E53BA02BAB6140B0F88843B6AAB5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var);
		SensorRecorder_add_OnNewSensorRecorded_m9C305706D36E9F31DC01E77C1ACA604D39232C4F(L_1, NULL);
		// for (int i = 0; i < SensorEntries.Length; i++)
		V_0 = 0;
		goto IL_00ab;
	}

IL_0024:
	{
		// SensorEntries[i].active = false;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_2 = __this->___SensorEntries_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		L_5->___active_0 = (bool)0;
		// SensorEntries[i].name = "";
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_6 = __this->___SensorEntries_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		L_9->___name_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___name_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// SensorEntries[i].ColourSwatch.enabled = false;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_10 = __this->___SensorEntries_6;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = L_13->___ColourSwatch_3;
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)0, NULL);
		// SensorEntries[i].Name.enabled = false;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_15 = __this->___SensorEntries_6;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___Name_2;
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)0, NULL);
		// SensorEntries[i].Name.text = "";
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_20 = __this->___SensorEntries_6;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = L_23->___Name_2;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// SensorEntries[i].MaxValue.enabled = false;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_25 = __this->___SensorEntries_6;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = L_28->___MaxValue_5;
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		// SensorEntries[i].MinValue.enabled = false;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_30 = __this->___SensorEntries_6;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = L_33->___MinValue_4;
		NullCheck(L_34);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_34, (bool)0, NULL);
		// for (int i = 0; i < SensorEntries.Length; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ab:
	{
		// for (int i = 0; i < SensorEntries.Length; i++)
		int32_t L_36 = V_0;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_37 = __this->___SensorEntries_6;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// canvasHackField = typeof(Canvas).GetField("willRenderCanvases", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck(L_39);
		FieldInfo_t* L_40;
		L_40 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_39, _stringLiteral5314E6368487A4939609EEEBC098F322B7696355, ((int32_t)40));
		__this->___canvasHackField_8 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasHackField_8), (void*)L_40);
		// canvasHackObject = canvasHackField.GetValue(null);
		FieldInfo_t* L_41 = __this->___canvasHackField_8;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_41, NULL);
		__this->___canvasHackObject_9 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasHackObject_9), (void*)L_42);
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorCanvas::SensorRecorder_OnNewSensorRecorded(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorCanvas_SensorRecorder_OnNewSensorRecorded_mDFE9A87A1DD0E53BA02BAB6140B0F88843B6AAB5 (SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* __this, String_t* ___0_sensorName, float ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < SensorEntries.Length; i++)
		V_0 = 0;
		goto IL_00e3;
	}

IL_0007:
	{
		// if (SensorEntries[i].name == sensorName)
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_0 = __this->___SensorEntries_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4 = L_3->___name_1;
		String_t* L_5 = ___0_sensorName;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_00f1;
		}
	}
	{
		// if (SensorEntries[i].active) { continue; }
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_7 = __this->___SensorEntries_6;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11 = L_10->___active_0;
		if (L_11)
		{
			goto IL_00df;
		}
	}
	{
		// SensorEntries[i].active = true;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_12 = __this->___SensorEntries_6;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		L_15->___active_0 = (bool)1;
		// SensorEntries[i].name = sensorName;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_16 = __this->___SensorEntries_6;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20 = ___0_sensorName;
		NullCheck(L_19);
		L_19->___name_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___name_1), (void*)L_20);
		// SensorEntries[i].ColourSwatch.enabled = true;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_21 = __this->___SensorEntries_6;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = L_24->___ColourSwatch_3;
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)1, NULL);
		// SensorEntries[i].Name.enabled = true;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_26 = __this->___SensorEntries_6;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___Name_2;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
		// SensorEntries[i].Name.text = sensorName;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_31 = __this->___SensorEntries_6;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = L_34->___Name_2;
		String_t* L_36 = ___0_sensorName;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_36);
		// SensorEntries[i].MaxValue.enabled = true;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_37 = __this->___SensorEntries_6;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = L_40->___MaxValue_5;
		NullCheck(L_41);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_41, (bool)1, NULL);
		// SensorEntries[i].MinValue.enabled = true;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_42 = __this->___SensorEntries_6;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = L_45->___MinValue_4;
		NullCheck(L_46);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_46, (bool)1, NULL);
		// SensorEntries[i].MinValue.text = value.ToString();
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_47 = __this->___SensorEntries_6;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = L_50->___MinValue_4;
		String_t* L_52;
		L_52 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___1_value), NULL);
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_52);
		// SensorEntries[i].MaxValue.text = value.ToString();
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_53 = __this->___SensorEntries_6;
		int32_t L_54 = V_0;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = L_56->___MaxValue_5;
		String_t* L_58;
		L_58 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___1_value), NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_58);
		// break;
		return;
	}

IL_00df:
	{
		// for (int i = 0; i < SensorEntries.Length; i++)
		int32_t L_59 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_00e3:
	{
		// for (int i = 0; i < SensorEntries.Length; i++)
		int32_t L_60 = V_0;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_61 = __this->___SensorEntries_6;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorCanvas::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorCanvas_Update_m7D2D50E605F0CE123EA02649DCA8E9D5A1B2DEAE (SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m49B7A1E8C13D4336DC8A738FA57CB3D1B3123035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA3C51A24CCA1AA47FF3E292AB2B151D756B4D86A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m83190B47FEC18F1D290A27C60EFE6608228D3914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m137269A891E547F39774573503157D6D4C49E754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_t259290BAA45FFFAA649363691D004694F0E9CF92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	Enumerator_t9DE5961A481A89538702A73B5740544CC7515302 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// RenderDelayFrameCount += 1;
		float L_0 = __this->___RenderDelayFrameCount_10;
		__this->___RenderDelayFrameCount_10 = ((float)il2cpp_codegen_add(L_0, (1.0f)));
		// if (RenderDelayFrameCount < 10) { return; }
		float L_1 = __this->___RenderDelayFrameCount_10;
		if ((!(((float)L_1) < ((float)(10.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// if (RenderDelayFrameCount < 10) { return; }
		return;
	}

IL_0020:
	{
		// RenderDelayFrameCount = 0;
		__this->___RenderDelayFrameCount_10 = (0.0f);
		// foreach (var sensor in SensorRecorder.LastSensorValues)
		il2cpp_codegen_runtime_class_init_inline(SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_2 = ((SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_StaticFields*)il2cpp_codegen_static_fields_for(SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var))->___LastSensorValues_1;
		NullCheck(L_2);
		Enumerator_t9DE5961A481A89538702A73B5740544CC7515302 L_3;
		L_3 = Dictionary_2_GetEnumerator_m49B7A1E8C13D4336DC8A738FA57CB3D1B3123035(L_2, Dictionary_2_GetEnumerator_m49B7A1E8C13D4336DC8A738FA57CB3D1B3123035_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0168:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA3C51A24CCA1AA47FF3E292AB2B151D756B4D86A((&V_1), Enumerator_Dispose_mA3C51A24CCA1AA47FF3E292AB2B151D756B4D86A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_015a_1;
			}

IL_003b_1:
			{
				// foreach (var sensor in SensorRecorder.LastSensorValues)
				KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 L_4;
				L_4 = Enumerator_get_Current_m137269A891E547F39774573503157D6D4C49E754_inline((&V_1), Enumerator_get_Current_m137269A891E547F39774573503157D6D4C49E754_RuntimeMethod_var);
				V_2 = L_4;
				// for (int i = 0; i < SensorEntries.Length; i++)
				V_3 = 0;
				goto IL_014c_1;
			}

IL_004a_1:
			{
				// if (SensorEntries[i].active == false) { continue; }
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_5 = __this->___SensorEntries_6;
				int32_t L_6 = V_3;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				NullCheck(L_8);
				bool L_9 = L_8->___active_0;
				if (!L_9)
				{
					goto IL_0148_1;
				}
			}
			{
				// if (sensor.Key != SensorEntries[i].name) { continue; }
				String_t* L_10;
				L_10 = KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_inline((&V_2), KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var);
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_11 = __this->___SensorEntries_6;
				int32_t L_12 = V_3;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				NullCheck(L_14);
				String_t* L_15 = L_14->___name_1;
				bool L_16;
				L_16 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, L_15, NULL);
				if (L_16)
				{
					goto IL_0148_1;
				}
			}
			{
				// SensorEntries[i].TimesValues.Add(new SensorDataPoint(Util.Timestamp(Time.frameCount), sensor.Value));
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_17 = __this->___SensorEntries_6;
				int32_t L_18 = V_3;
				NullCheck(L_17);
				int32_t L_19 = L_18;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				NullCheck(L_20);
				List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_21 = L_20->___TimesValues_7;
				int32_t L_22;
				L_22 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
				il2cpp_codegen_runtime_class_init_inline(Util_t259290BAA45FFFAA649363691D004694F0E9CF92_il2cpp_TypeInfo_var);
				double L_23;
				L_23 = Util_Timestamp_mB128191B5B150558B70F22D4CA6DA9CB2556C417(L_22, NULL);
				float L_24;
				L_24 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_2), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
				SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_25;
				memset((&L_25), 0, sizeof(L_25));
				SensorDataPoint__ctor_m4CFD71ACF90DD71C81969FC6C7B62DF0BE476DCB((&L_25), L_23, L_24, /*hidden argument*/NULL);
				NullCheck(L_21);
				List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_inline(L_21, L_25, List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_RuntimeMethod_var);
				// if (SensorEntries[i].maxValue < sensor.Value)
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_26 = __this->___SensorEntries_6;
				int32_t L_27 = V_3;
				NullCheck(L_26);
				int32_t L_28 = L_27;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				NullCheck(L_29);
				float L_30 = L_29->___maxValue_9;
				float L_31;
				L_31 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_2), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
				if ((!(((float)L_30) < ((float)L_31))))
				{
					goto IL_00f5_1;
				}
			}
			{
				// SensorEntries[i].maxValue = sensor.Value;
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_32 = __this->___SensorEntries_6;
				int32_t L_33 = V_3;
				NullCheck(L_32);
				int32_t L_34 = L_33;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
				float L_36;
				L_36 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_2), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
				NullCheck(L_35);
				L_35->___maxValue_9 = L_36;
				// SensorEntries[i].MaxValue.text = SensorEntries[i].maxValue.ToString("0.000");
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_37 = __this->___SensorEntries_6;
				int32_t L_38 = V_3;
				NullCheck(L_37);
				int32_t L_39 = L_38;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
				NullCheck(L_40);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = L_40->___MaxValue_5;
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_42 = __this->___SensorEntries_6;
				int32_t L_43 = V_3;
				NullCheck(L_42);
				int32_t L_44 = L_43;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				NullCheck(L_45);
				float* L_46 = (&L_45->___maxValue_9);
				String_t* L_47;
				L_47 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_46, _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F, NULL);
				NullCheck(L_41);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_47);
			}

IL_00f5_1:
			{
				// if (SensorEntries[i].minValue > sensor.Value)
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_48 = __this->___SensorEntries_6;
				int32_t L_49 = V_3;
				NullCheck(L_48);
				int32_t L_50 = L_49;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
				NullCheck(L_51);
				float L_52 = L_51->___minValue_8;
				float L_53;
				L_53 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_2), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
				if ((!(((float)L_52) > ((float)L_53))))
				{
					goto IL_0148_1;
				}
			}
			{
				// SensorEntries[i].minValue = sensor.Value;
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_54 = __this->___SensorEntries_6;
				int32_t L_55 = V_3;
				NullCheck(L_54);
				int32_t L_56 = L_55;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
				float L_58;
				L_58 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_2), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
				NullCheck(L_57);
				L_57->___minValue_8 = L_58;
				// SensorEntries[i].MinValue.text = SensorEntries[i].minValue.ToString("0.000");
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_59 = __this->___SensorEntries_6;
				int32_t L_60 = V_3;
				NullCheck(L_59);
				int32_t L_61 = L_60;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
				NullCheck(L_62);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = L_62->___MinValue_4;
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_64 = __this->___SensorEntries_6;
				int32_t L_65 = V_3;
				NullCheck(L_64);
				int32_t L_66 = L_65;
				SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
				NullCheck(L_67);
				float* L_68 = (&L_67->___minValue_8);
				String_t* L_69;
				L_69 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_68, _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F, NULL);
				NullCheck(L_63);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_63, L_69);
			}

IL_0148_1:
			{
				// for (int i = 0; i < SensorEntries.Length; i++)
				int32_t L_70 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
			}

IL_014c_1:
			{
				// for (int i = 0; i < SensorEntries.Length; i++)
				int32_t L_71 = V_3;
				SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_72 = __this->___SensorEntries_6;
				NullCheck(L_72);
				if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
				{
					goto IL_004a_1;
				}
			}

IL_015a_1:
			{
				// foreach (var sensor in SensorRecorder.LastSensorValues)
				bool L_73;
				L_73 = Enumerator_MoveNext_m83190B47FEC18F1D290A27C60EFE6608228D3914((&V_1), Enumerator_MoveNext_m83190B47FEC18F1D290A27C60EFE6608228D3914_RuntimeMethod_var);
				if (L_73)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0176;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0176:
	{
		// double staleTimestamp = Util.Timestamp(Time.frameCount) - MaxSensorTimeSpan;
		int32_t L_74;
		L_74 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_t259290BAA45FFFAA649363691D004694F0E9CF92_il2cpp_TypeInfo_var);
		double L_75;
		L_75 = Util_Timestamp_mB128191B5B150558B70F22D4CA6DA9CB2556C417(L_74, NULL);
		float L_76 = __this->___MaxSensorTimeSpan_5;
		V_0 = ((double)il2cpp_codegen_subtract(L_75, ((double)L_76)));
		// for (int i = 0; i < SensorEntries.Length; i++)
		V_4 = 0;
		goto IL_01da;
	}

IL_018e:
	{
		// if (SensorEntries[i].TimesValues[0].Time < staleTimestamp)
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_77 = __this->___SensorEntries_6;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_81 = L_80->___TimesValues_7;
		NullCheck(L_81);
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_82;
		L_82 = List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269(L_81, 0, List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_RuntimeMethod_var);
		double L_83 = L_82.___Time_0;
		double L_84 = V_0;
		if ((!(((double)L_83) < ((double)L_84))))
		{
			goto IL_01d4;
		}
	}
	{
		// SensorEntries[i].TimesValues.RemoveAt(0);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_85 = __this->___SensorEntries_6;
		int32_t L_86 = V_4;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_89 = L_88->___TimesValues_7;
		NullCheck(L_89);
		List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38(L_89, 0, List_1_RemoveAt_m58919A646E95411FE345A3A8303143154F7B9D38_RuntimeMethod_var);
	}

IL_01be:
	{
		// while (SensorEntries[i].TimesValues.Count > 0)
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_90 = __this->___SensorEntries_6;
		int32_t L_91 = V_4;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_94 = L_93->___TimesValues_7;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_inline(L_94, List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_RuntimeMethod_var);
		if ((((int32_t)L_95) > ((int32_t)0)))
		{
			goto IL_018e;
		}
	}

IL_01d4:
	{
		// for (int i = 0; i < SensorEntries.Length; i++)
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_01da:
	{
		// for (int i = 0; i < SensorEntries.Length; i++)
		int32_t L_97 = V_4;
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_98 = __this->___SensorEntries_6;
		NullCheck(L_98);
		if ((((int32_t)L_97) < ((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))
		{
			goto IL_01be;
		}
	}
	{
		// canvasHackField.SetValue(null, null);
		FieldInfo_t* L_99 = __this->___canvasHackField_8;
		NullCheck(L_99);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_99, NULL, NULL, NULL);
		// renderCamera.Camera.Render();
		SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* L_100 = __this->___renderCamera_7;
		NullCheck(L_100);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_101;
		L_101 = SensorRenderCamera_get_Camera_mC3D3014EC6B14D3F15300E5D85FF216FD0604301_inline(L_100, NULL);
		NullCheck(L_101);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_101, NULL);
		// canvasHackField.SetValue(null, canvasHackObject);
		FieldInfo_t* L_102 = __this->___canvasHackField_8;
		RuntimeObject* L_103 = __this->___canvasHackObject_9;
		NullCheck(L_102);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_102, NULL, L_103, NULL);
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorCanvas::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorCanvas_OnDestroy_m17E34D5C542EE043606388C6995BFE68A37F1A6B (SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SensorCanvas_SensorRecorder_OnNewSensorRecorded_mDFE9A87A1DD0E53BA02BAB6140B0F88843B6AAB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SensorRecorder.OnNewSensorRecorded -= SensorRecorder_OnNewSensorRecorded;
		onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF* L_0 = (onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF*)il2cpp_codegen_object_new(onNewSensorRecorded_t6668369BB4F9576A5D30970BBCE02E4DF6C699EF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		onNewSensorRecorded__ctor_m690FA9186E37B7B01BEE69F6F1C540C3C9BFC8AB(L_0, __this, (intptr_t)((void*)SensorCanvas_SensorRecorder_OnNewSensorRecorded_mDFE9A87A1DD0E53BA02BAB6140B0F88843B6AAB5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SensorRecorder_tBBE095AE48E1AD3448041FA8ED542ED771E677CE_il2cpp_TypeInfo_var);
		SensorRecorder_remove_OnNewSensorRecorded_mF58D7B125C82A07835774CCC0F5F318347259914(L_0, NULL);
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorCanvas__ctor_m4146687122D746FDC2FF7BCF115545AEB9CD3336 (SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* __this, const RuntimeMethod* method) 
{
	{
		// public float LineWidth = 0.03f;
		__this->___LineWidth_4 = (0.0299999993f);
		// public float MaxSensorTimeSpan = 120;
		__this->___MaxSensorTimeSpan_5 = (120.0f);
		// public int Mask = 64;
		__this->___Mask_11 = ((int32_t)64);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cognitive3D.ActiveSession.SensorCanvas/SensorDataPoint::.ctor(System.Double,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorDataPoint__ctor_m4CFD71ACF90DD71C81969FC6C7B62DF0BE476DCB (SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E* __this, double ___0_time, float ___1_value, const RuntimeMethod* method) 
{
	{
		// Time = time;
		double L_0 = ___0_time;
		__this->___Time_0 = L_0;
		// Value = value;
		float L_1 = ___1_value;
		__this->___Value_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SensorDataPoint__ctor_m4CFD71ACF90DD71C81969FC6C7B62DF0BE476DCB_AdjustorThunk (RuntimeObject* __this, double ___0_time, float ___1_value, const RuntimeMethod* method)
{
	SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E*>(__this + _offset);
	SensorDataPoint__ctor_m4CFD71ACF90DD71C81969FC6C7B62DF0BE476DCB(_thisAdjusted, ___0_time, ___1_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cognitive3D.ActiveSession.SensorCanvas/SensorEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorEntry__ctor_m6FB53C39292B58BACE51EBA427AAB33F0EBB0B14 (SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SensorDataPoint> TimesValues = new List<SensorDataPoint>();
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_0 = (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*)il2cpp_codegen_object_new(List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65(L_0, List_1__ctor_m8903D54D1F5CF131DACAC7CFB00FDAA27FA7CC65_RuntimeMethod_var);
		__this->___TimesValues_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TimesValues_7), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera Cognitive3D.ActiveSession.SensorRenderCamera::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SensorRenderCamera_get_Camera_mC3D3014EC6B14D3F15300E5D85FF216FD0604301 (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, const RuntimeMethod* method) 
{
	{
		// public Camera Camera { get; private set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___U3CCameraU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorRenderCamera::set_Camera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRenderCamera_set_Camera_mDDBBB2E7518D28BF83D027BAA70B635955BAB650 (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Camera Camera { get; private set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_value;
		__this->___U3CCameraU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorRenderCamera::Initialize(Cognitive3D.ActiveSession.SensorCanvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRenderCamera_Initialize_mB43497E8C0761926A6369EE9A1FFED09E1D80655 (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* ___0_canvas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mask = canvas.Mask;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_0 = ___0_canvas;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Mask_11;
		__this->___mask_6 = L_1;
		// lineWidth = canvas.LineWidth;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_2 = ___0_canvas;
		NullCheck(L_2);
		float L_3 = L_2->___LineWidth_4;
		__this->___lineWidth_7 = L_3;
		// sensorCanvas = canvas;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_4 = ___0_canvas;
		__this->___sensorCanvas_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sensorCanvas_4), (void*)L_4);
		// Camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		SensorRenderCamera_set_Camera_mDDBBB2E7518D28BF83D027BAA70B635955BAB650_inline(__this, L_5, NULL);
		// Camera.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = SensorRenderCamera_get_Camera_mC3D3014EC6B14D3F15300E5D85FF216FD0604301_inline(__this, NULL);
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// Camera.cullingMask = mask;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = SensorRenderCamera_get_Camera_mC3D3014EC6B14D3F15300E5D85FF216FD0604301_inline(__this, NULL);
		int32_t L_8 = __this->___mask_6;
		NullCheck(L_7);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorRenderCamera::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRenderCamera_OnPostRender_m27868B4858C56CC81A979EEB8A5E1CDC10FA473F (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_t259290BAA45FFFAA649363691D004694F0E9CF92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E V_9;
	memset((&V_9), 0, sizeof(V_9));
	SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	{
		// double sessionTimestamp = Cognitive3D_Manager.SessionTimeStamp;
		double L_0;
		L_0 = Cognitive3D_Manager_get_SessionTimeStamp_m4912FC8A1BB1A34465DF39EED3DB23B6A2530F7A_inline(NULL);
		V_0 = L_0;
		// double sessionTimeSec = (Util.Timestamp(Time.frameCount) - Cognitive3D_Manager.SessionTimeStamp);
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_t259290BAA45FFFAA649363691D004694F0E9CF92_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Util_Timestamp_mB128191B5B150558B70F22D4CA6DA9CB2556C417(L_1, NULL);
		double L_3;
		L_3 = Cognitive3D_Manager_get_SessionTimeStamp_m4912FC8A1BB1A34465DF39EED3DB23B6A2530F7A_inline(NULL);
		V_1 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// for (int i = 0; i < sensorCanvas.SensorEntries.Length; i++)
		V_2 = 0;
		goto IL_031c;
	}

IL_0028:
	{
		// if (!sensorCanvas.SensorEntries[i].active) { continue; }
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_4 = __this->___sensorCanvas_4;
		NullCheck(L_4);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_5 = L_4->___SensorEntries_6;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___active_0;
		if (!L_9)
		{
			goto IL_0318;
		}
	}
	{
		// int sensorDataPointCount = sensorCanvas.SensorEntries[i].TimesValues.Count;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_10 = __this->___sensorCanvas_4;
		NullCheck(L_10);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_11 = L_10->___SensorEntries_6;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_15 = L_14->___TimesValues_7;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_inline(L_15, List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_RuntimeMethod_var);
		V_3 = L_16;
		// if (sensorDataPointCount == 0) { continue; }
		int32_t L_17 = V_3;
		if (!L_17)
		{
			goto IL_0318;
		}
	}
	{
		// GL.Begin(GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// GL.Color(ColorWhite);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___ColorWhite_8;
		GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_18, NULL);
		// sensorCanvas.SensorEntries[i].Material.SetPass(0);
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_19 = __this->___sensorCanvas_4;
		NullCheck(L_19);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_20 = L_19->___SensorEntries_6;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = L_23->___Material_6;
		NullCheck(L_24);
		bool L_25;
		L_25 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_24, 0, NULL);
		// float semimax = 0.98f;
		V_4 = (0.980000019f);
		// float semimin = 0.02f;
		V_5 = (0.0199999996f);
		// Vector3 normal = new Vector3();
		il2cpp_codegen_initobj((&V_7), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// float minXValue = 1; //1 at session start, 0 at 30 seconds. after 30 seconds, don't bother clamping to range
		V_8 = (1.0f);
		// minXValue = Mathf.LerpUnclamped(1, 0, (float)sessionTimeSec / sensorCanvas.MaxSensorTimeSpan);
		double L_26 = V_1;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_27 = __this->___sensorCanvas_4;
		NullCheck(L_27);
		float L_28 = L_27->___MaxSensorTimeSpan_5;
		float L_29;
		L_29 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline((1.0f), (0.0f), ((float)(((float)L_26)/L_28)), NULL);
		V_8 = L_29;
		// SensorCanvas.SensorDataPoint previousSdp = sensorCanvas.SensorEntries[i].TimesValues[0];
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_30 = __this->___sensorCanvas_4;
		NullCheck(L_30);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_31 = L_30->___SensorEntries_6;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_35 = L_34->___TimesValues_7;
		NullCheck(L_35);
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_36;
		L_36 = List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269(L_35, 0, List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_RuntimeMethod_var);
		V_9 = L_36;
		// for (int j = 1; j < sensorDataPointCount; j++)
		V_11 = 1;
		goto IL_030b;
	}

IL_00e5:
	{
		// float y1 = semimin + (previousSdp.Value - sensorCanvas.SensorEntries[i].minValue) * (semimax - semimin) / (sensorCanvas.SensorEntries[i].maxValue - sensorCanvas.SensorEntries[i].minValue);
		float L_37 = V_5;
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_38 = V_9;
		float L_39 = L_38.___Value_1;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_40 = __this->___sensorCanvas_4;
		NullCheck(L_40);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_41 = L_40->___SensorEntries_6;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		float L_45 = L_44->___minValue_8;
		float L_46 = V_4;
		float L_47 = V_5;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_48 = __this->___sensorCanvas_4;
		NullCheck(L_48);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_49 = L_48->___SensorEntries_6;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		float L_53 = L_52->___maxValue_9;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_54 = __this->___sensorCanvas_4;
		NullCheck(L_54);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_55 = L_54->___SensorEntries_6;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		float L_59 = L_58->___minValue_8;
		V_12 = ((float)il2cpp_codegen_add(L_37, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_39, L_45)), ((float)il2cpp_codegen_subtract(L_46, L_47))))/((float)il2cpp_codegen_subtract(L_53, L_59))))));
		// float sessionTimeDataPointSec = (float)(previousSdp.Time - sessionTimestamp);
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_60 = V_9;
		double L_61 = L_60.___Time_0;
		double L_62 = V_0;
		V_13 = ((float)((double)il2cpp_codegen_subtract(L_61, L_62)));
		// float x1 = minXValue + sessionTimeDataPointSec * (1 - minXValue) / (float)sessionTimeSec;
		float L_63 = V_8;
		float L_64 = V_13;
		float L_65 = V_8;
		double L_66 = V_1;
		V_14 = ((float)il2cpp_codegen_add(L_63, ((float)(((float)il2cpp_codegen_multiply(L_64, ((float)il2cpp_codegen_subtract((1.0f), L_65))))/((float)L_66)))));
		// sdp = sensorCanvas.SensorEntries[i].TimesValues[j]; //List get item
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_67 = __this->___sensorCanvas_4;
		NullCheck(L_67);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_68 = L_67->___SensorEntries_6;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* L_72 = L_71->___TimesValues_7;
		int32_t L_73 = V_11;
		NullCheck(L_72);
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_74;
		L_74 = List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269(L_72, L_73, List_1_get_Item_m433230C55FE545019D10F46932B18FEBAED57269_RuntimeMethod_var);
		V_10 = L_74;
		// float y2 = semimin + (sdp.Value - sensorCanvas.SensorEntries[i].minValue) * (semimax - semimin) / (sensorCanvas.SensorEntries[i].maxValue - sensorCanvas.SensorEntries[i].minValue);
		float L_75 = V_5;
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_76 = V_10;
		float L_77 = L_76.___Value_1;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_78 = __this->___sensorCanvas_4;
		NullCheck(L_78);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_79 = L_78->___SensorEntries_6;
		int32_t L_80 = V_2;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		float L_83 = L_82->___minValue_8;
		float L_84 = V_4;
		float L_85 = V_5;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_86 = __this->___sensorCanvas_4;
		NullCheck(L_86);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_87 = L_86->___SensorEntries_6;
		int32_t L_88 = V_2;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		float L_91 = L_90->___maxValue_9;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_92 = __this->___sensorCanvas_4;
		NullCheck(L_92);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_93 = L_92->___SensorEntries_6;
		int32_t L_94 = V_2;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		SensorEntry_t9A7CBE9E48E6AF0C80AC467935844E0369A8BD22* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		float L_97 = L_96->___minValue_8;
		V_15 = ((float)il2cpp_codegen_add(L_75, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_77, L_83)), ((float)il2cpp_codegen_subtract(L_84, L_85))))/((float)il2cpp_codegen_subtract(L_91, L_97))))));
		// float sessionTimeDataPointSec2 = (float)(sdp.Time - sessionTimestamp);
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_98 = V_10;
		double L_99 = L_98.___Time_0;
		double L_100 = V_0;
		V_16 = ((float)((double)il2cpp_codegen_subtract(L_99, L_100)));
		// float x2 = minXValue + sessionTimeDataPointSec2 * (1 - minXValue) / (float)sessionTimeSec;
		float L_101 = V_8;
		float L_102 = V_16;
		float L_103 = V_8;
		double L_104 = V_1;
		V_17 = ((float)il2cpp_codegen_add(L_101, ((float)(((float)il2cpp_codegen_multiply(L_102, ((float)il2cpp_codegen_subtract((1.0f), L_103))))/((float)L_104)))));
		// dir.x = x2 - x1;
		float L_105 = V_17;
		float L_106 = V_14;
		(&V_6)->___x_2 = ((float)il2cpp_codegen_subtract(L_105, L_106));
		// dir.y = y2 - y1;
		float L_107 = V_15;
		float L_108 = V_12;
		(&V_6)->___y_3 = ((float)il2cpp_codegen_subtract(L_107, L_108));
		// normal.x = -dir.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_6;
		float L_110 = L_109.___y_3;
		(&V_7)->___x_2 = ((-L_110));
		// normal.y = dir.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_6;
		float L_112 = L_111.___x_2;
		(&V_7)->___y_3 = L_112;
		// float mag = Mathf.Sqrt(normal.x * normal.x + normal.y * normal.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_7;
		float L_114 = L_113.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_7;
		float L_116 = L_115.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_7;
		float L_118 = L_117.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_7;
		float L_120 = L_119.___y_3;
		float L_121;
		L_121 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_114, L_116)), ((float)il2cpp_codegen_multiply(L_118, L_120)))));
		V_18 = L_121;
		// normal.x = normal.x / mag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_7;
		float L_123 = L_122.___x_2;
		float L_124 = V_18;
		(&V_7)->___x_2 = ((float)(L_123/L_124));
		// normal.y = normal.y / mag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_7;
		float L_126 = L_125.___y_3;
		float L_127 = V_18;
		(&V_7)->___y_3 = ((float)(L_126/L_127));
		// GL.Vertex3(x1 - normal.x * lineWidth, y1 - normal.y * lineWidth, 0);
		float L_128 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = V_7;
		float L_130 = L_129.___x_2;
		float L_131 = __this->___lineWidth_7;
		float L_132 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_7;
		float L_134 = L_133.___y_3;
		float L_135 = __this->___lineWidth_7;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)il2cpp_codegen_subtract(L_128, ((float)il2cpp_codegen_multiply(L_130, L_131)))), ((float)il2cpp_codegen_subtract(L_132, ((float)il2cpp_codegen_multiply(L_134, L_135)))), (0.0f), NULL);
		// GL.Vertex3(x1 + normal.x * lineWidth, y1 + normal.y * lineWidth, 0);
		float L_136 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_7;
		float L_138 = L_137.___x_2;
		float L_139 = __this->___lineWidth_7;
		float L_140 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = V_7;
		float L_142 = L_141.___y_3;
		float L_143 = __this->___lineWidth_7;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)il2cpp_codegen_add(L_136, ((float)il2cpp_codegen_multiply(L_138, L_139)))), ((float)il2cpp_codegen_add(L_140, ((float)il2cpp_codegen_multiply(L_142, L_143)))), (0.0f), NULL);
		// GL.Vertex3(x2 + normal.x * lineWidth, y2 + normal.y * lineWidth, 0);
		float L_144 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = V_7;
		float L_146 = L_145.___x_2;
		float L_147 = __this->___lineWidth_7;
		float L_148 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = V_7;
		float L_150 = L_149.___y_3;
		float L_151 = __this->___lineWidth_7;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)il2cpp_codegen_add(L_144, ((float)il2cpp_codegen_multiply(L_146, L_147)))), ((float)il2cpp_codegen_add(L_148, ((float)il2cpp_codegen_multiply(L_150, L_151)))), (0.0f), NULL);
		// GL.Vertex3(x2 - normal.x * lineWidth, y2 - normal.y * lineWidth, 0);
		float L_152 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = V_7;
		float L_154 = L_153.___x_2;
		float L_155 = __this->___lineWidth_7;
		float L_156 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = V_7;
		float L_158 = L_157.___y_3;
		float L_159 = __this->___lineWidth_7;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)il2cpp_codegen_subtract(L_152, ((float)il2cpp_codegen_multiply(L_154, L_155)))), ((float)il2cpp_codegen_subtract(L_156, ((float)il2cpp_codegen_multiply(L_158, L_159)))), (0.0f), NULL);
		// previousSdp = sdp;
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_160 = V_10;
		V_9 = L_160;
		// for (int j = 1; j < sensorDataPointCount; j++)
		int32_t L_161 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_030b:
	{
		// for (int j = 1; j < sensorDataPointCount; j++)
		int32_t L_162 = V_11;
		int32_t L_163 = V_3;
		if ((((int32_t)L_162) < ((int32_t)L_163)))
		{
			goto IL_00e5;
		}
	}
	{
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
	}

IL_0318:
	{
		// for (int i = 0; i < sensorCanvas.SensorEntries.Length; i++)
		int32_t L_164 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_031c:
	{
		// for (int i = 0; i < sensorCanvas.SensorEntries.Length; i++)
		int32_t L_165 = V_2;
		SensorCanvas_tFA011AECDB7F262D68BAA494621CDFD81D737EF1* L_166 = __this->___sensorCanvas_4;
		NullCheck(L_166);
		SensorEntryU5BU5D_tD9614084CE351420E27EC4D5E4767C31E928BE6C* L_167 = L_166->___SensorEntries_6;
		NullCheck(L_167);
		if ((((int32_t)L_165) < ((int32_t)((int32_t)(((RuntimeArray*)L_167)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void Cognitive3D.ActiveSession.SensorRenderCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorRenderCamera__ctor_mF332E8E56B0992D5387903B716C43405F6BCEABA (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, const RuntimeMethod* method) 
{
	{
		// int mask = 64;
		__this->___mask_6 = ((int32_t)64);
		// float lineWidth = 0.03f;
		__this->___lineWidth_7 = (0.0299999993f);
		// Color ColorWhite = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___ColorWhite_8 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B _GetProjectionMatrix_Invoke_m3B28E83D5A6814112DE44405EE9CDAB3A07C3747_inline (_GetProjectionMatrix_t7B7E0AB54D96C953A9963DA82E97D31F24344FC4* __this, int32_t ___0_eEye, float ___1_fNearZ, float ___2_fFarZ, const RuntimeMethod* method) 
{
	typedef HmdMatrix44_t_tD902B5CE19D262516661958E2C4978A07A76492B (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eEye, ___1_fNearZ, ___2_fFarZ, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SensorRenderCamera_get_Camera_mC3D3014EC6B14D3F15300E5D85FF216FD0604301_inline (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, const RuntimeMethod* method) 
{
	{
		// public Camera Camera { get; private set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___U3CCameraU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SensorRenderCamera_set_Camera_mDDBBB2E7518D28BF83D027BAA70B635955BAB650_inline (SensorRenderCamera_t0B5E366BAD166C989F434F9C5DA35D74C5E7F361* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Camera Camera { get; private set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_value;
		__this->___U3CCameraU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Cognitive3D_Manager_get_SessionTimeStamp_m4912FC8A1BB1A34465DF39EED3DB23B6A2530F7A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _timestamp;
		double L_0 = ((Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE_StaticFields*)il2cpp_codegen_static_fields_for(Cognitive3D_Manager_tCBFBBCEE73894EB39DFDFD935DA460DFA40B72CE_il2cpp_TypeInfo_var))->____timestamp_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE Enumerator_get_Current_m4BB037FEFB35F886088FC522D0C6932B05735A3D_gshared_inline (Enumerator_tFBEC3A5A35B9411AFAAD1638F1411BD5CCB36BF2* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE L_0 = (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6AD80000F0FE13FC04AA88E5307EFB491116F602_gshared_inline (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E ___0_item, const RuntimeMethod* method) 
{
	SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121* L_1 = (SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SensorDataPointU5BU5D_t0D13A97E954AC821E1C9E13DFE69E6E9732F2121* L_6 = V_0;
		int32_t L_7 = V_1;
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E)L_8);
		return;
	}

IL_0034:
	{
		SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E L_9 = ___0_item;
		((  void (*) (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8*, SensorDataPoint_t4E24E9B27CA56788FB8A2AC6764C8259E2A7391E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m184609E2602B5DA29B915455DCC06043A619C277_gshared_inline (List_1_tC39609B1FF9ABAAEC70B7D07B0932CBAC3541CD8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
