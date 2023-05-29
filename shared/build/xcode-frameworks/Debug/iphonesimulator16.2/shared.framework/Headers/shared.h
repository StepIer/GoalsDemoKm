#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedPresentationKmmViewModel, SharedKotlinUnit, NSError, SharedPresentationBaseViewModel<STATE, SIDE_EFFECT>, SharedLoadTextSizeUseCase, SharedMainViewModelAction, SharedMainViewModelState, SharedSettingsViewModelSideEffect, SharedMainViewModelActionInitScreen, SharedMainViewModelSideEffect, SharedSaveTextSizeUseCase, SharedSettingsViewModelAction, SharedSettingsViewModelState, SharedSettingsViewModelActionButtonSaveClicked, SharedSettingsViewModelActionTextFieldTextSizeChangeValue, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedMainRepositoryImplCompanion, SharedLCompanion, SharedLGeneral, SharedScope, SharedParametersHolder, SharedKotlinLazyThreadSafetyMode, SharedModule, SharedLogger, SharedInstanceRegistry, SharedPropertyRegistry, SharedScopeRegistry, SharedKoinApplicationCompanion, SharedKoinApplication, SharedKotlinArray<T>, SharedLevel, SharedKoin, SharedLockable, SharedInstanceFactory<T>, SharedScopeRegistryCompanion, SharedKotlinPair<__covariant A, __covariant B>, SharedScopeDSL, SharedSingleInstanceFactory<T>, SharedStringQualifier, SharedKotlinThrowable, SharedKotlinException, SharedKind, SharedBeanDefinition<T>, SharedCallbacks<T>, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedInstanceFactoryCompanion, SharedInstanceContext, SharedParametersHolderCompanion, SharedKoinPlatformTimeTools, SharedKoinPlatformTools, SharedDiagramViewModel, SharedMainViewModel, SharedSettingsViewModel, NSBundle, SharedTypeQualifier, SharedFactoryInstanceFactory<T>, SharedScopedInstanceFactory<T>, SharedOrbit_coreRealSettings, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKotlinAbstractCoroutineContextKey<B, E>;

@protocol SharedOrbit_coreContainer, SharedOrbit_coreContainerHost, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreCoroutineScope, SharedMainRepository, SharedMultiplatform_settingsSettings, SharedKoinScopeComponent, SharedQualifier, SharedKotlinKClass, SharedKotlinLazy, SharedScopeCallback, SharedKoinComponent, SharedKotlinComparable, SharedKoinContext, SharedKotlinSuspendFunction1, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinCoroutineContext, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKotlinIterator, SharedKotlinFunction, SharedOrbit_coreIdlingResource, SharedKotlinx_coroutines_coreCoroutineExceptionHandler;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiagramViewModel")))
@interface SharedDiagramViewModel : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("PresentationKmmViewModel")))
@interface SharedPresentationKmmViewModel : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Orbit_coreContainerHost")))
@protocol SharedOrbit_coreContainerHost
@required
@property (readonly) id<SharedOrbit_coreContainer> container __attribute__((swift_name("container")));
@end

__attribute__((swift_name("PresentationBaseViewModel")))
@interface SharedPresentationBaseViewModel<STATE, SIDE_EFFECT> : SharedPresentationKmmViewModel <SharedOrbit_coreContainerHost>
- (instancetype)initWithInitialState:(STATE)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SharedKotlinx_coroutines_coreFlow>)sideEffect __attribute__((swift_name("sideEffect()")));
- (SharedKotlinUnit *(^(^)(SharedKotlinUnit *(^)(SIDE_EFFECT, SharedKotlinUnit *), SharedKotlinUnit *(^)(NSError * _Nullable, SharedKotlinUnit *)))(void))sideEffectNative __attribute__((swift_name("sideEffectNative()")));
- (id<SharedKotlinx_coroutines_coreStateFlow>)state __attribute__((swift_name("state()")));
- (SharedKotlinUnit *(^(^)(SharedKotlinUnit *(^)(STATE, SharedKotlinUnit *), SharedKotlinUnit *(^)(NSError * _Nullable, SharedKotlinUnit *)))(void))stateNative __attribute__((swift_name("stateNative()")));
@property (readonly) id<SharedOrbit_coreContainer> container __attribute__((swift_name("container")));
@property (readonly) STATE initialState __attribute__((swift_name("initialState")));
@property (readonly) id<SharedKotlinx_coroutines_coreCoroutineScope> scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewModel")))
@interface SharedMainViewModel : SharedPresentationBaseViewModel<SharedMainViewModelState *, SharedSettingsViewModelSideEffect *>
- (instancetype)initWithLoadTextSizeUseCase:(SharedLoadTextSizeUseCase *)loadTextSizeUseCase __attribute__((swift_name("init(loadTextSizeUseCase:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)sendActionAction:(SharedMainViewModelAction *)action __attribute__((swift_name("sendAction(action:)")));
@end

__attribute__((swift_name("MainViewModel.Action")))
@interface SharedMainViewModelAction : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewModel.ActionInitScreen")))
@interface SharedMainViewModelActionInitScreen : SharedMainViewModelAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInitScreen __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMainViewModelActionInitScreen *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewModel.SideEffect")))
@interface SharedMainViewModelSideEffect : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sideEffect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMainViewModelSideEffect *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewModel.State")))
@interface SharedMainViewModelState : SharedBase
- (instancetype)initWithTextSize:(int32_t)textSize __attribute__((swift_name("init(textSize:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedMainViewModelState *)doCopyTextSize:(int32_t)textSize __attribute__((swift_name("doCopy(textSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t textSize __attribute__((swift_name("textSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsViewModel")))
@interface SharedSettingsViewModel : SharedPresentationBaseViewModel<SharedSettingsViewModelState *, SharedSettingsViewModelSideEffect *>
- (instancetype)initWithSaveTextSizeUseCase:(SharedSaveTextSizeUseCase *)saveTextSizeUseCase loadTextSizeUseCase:(SharedLoadTextSizeUseCase *)loadTextSizeUseCase __attribute__((swift_name("init(saveTextSizeUseCase:loadTextSizeUseCase:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)sendActionAction:(SharedSettingsViewModelAction *)action __attribute__((swift_name("sendAction(action:)")));
@end

__attribute__((swift_name("SettingsViewModel.Action")))
@interface SharedSettingsViewModelAction : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsViewModel.ActionButtonSaveClicked")))
@interface SharedSettingsViewModelActionButtonSaveClicked : SharedSettingsViewModelAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buttonSaveClicked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSettingsViewModelActionButtonSaveClicked *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsViewModel.ActionTextFieldTextSizeChangeValue")))
@interface SharedSettingsViewModelActionTextFieldTextSizeChangeValue : SharedSettingsViewModelAction
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedSettingsViewModelActionTextFieldTextSizeChangeValue *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsViewModel.SideEffect")))
@interface SharedSettingsViewModelSideEffect : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sideEffect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSettingsViewModelSideEffect *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsViewModel.State")))
@interface SharedSettingsViewModelState : SharedBase
- (instancetype)initWithTextSize:(int32_t)textSize __attribute__((swift_name("init(textSize:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedSettingsViewModelState *)doCopyTextSize:(int32_t)textSize __attribute__((swift_name("doCopy(textSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t textSize __attribute__((swift_name("textSize")));
@end

__attribute__((swift_name("MainRepository")))
@protocol SharedMainRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTextSizeWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTextSize(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setTextSizeSize:(int32_t)size completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setTextSize(size:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadTextSizeUseCase")))
@interface SharedLoadTextSizeUseCase : SharedBase
- (instancetype)initWithMainRepository:(id<SharedMainRepository>)mainRepository dispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(mainRepository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveTextSizeUseCase")))
@interface SharedSaveTextSizeUseCase : SharedBase
- (instancetype)initWithMainRepository:(id<SharedMainRepository>)mainRepository dispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(mainRepository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSize:(int32_t)size completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(size:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainRepositoryImpl")))
@interface SharedMainRepositoryImpl : SharedBase <SharedMainRepository>
- (instancetype)initWithSettings:(id<SharedMultiplatform_settingsSettings>)settings __attribute__((swift_name("init(settings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMainRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTextSizeWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTextSize(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setTextSizeSize:(int32_t)size completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setTextSize(size:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainRepositoryImpl.Companion")))
@interface SharedMainRepositoryImplCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMainRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_TEXT_SIZE __attribute__((swift_name("DEFAULT_TEXT_SIZE")));
@property (readonly) NSString *TEXT_SIZE __attribute__((swift_name("TEXT_SIZE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L")))
@interface SharedL : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedLCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L.Companion")))
@interface SharedLCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedLGeneral *general __attribute__((swift_name("general")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L.General")))
@interface SharedLGeneral : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin")))
@interface SharedKoin : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedScope *)createScopeT:(id<SharedKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (SharedScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (SharedScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (SharedScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(SharedLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) SharedInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) SharedLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedPropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) SharedScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinApplication")))
@interface SharedKoinApplication : SharedBase
@property (class, readonly, getter=companion) SharedKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoinApplication *)loggerLogger:(SharedLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKoinApplication *)modulesModules:(SharedKotlinArray<SharedModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKoinApplication *)modulesModules_:(NSArray<SharedModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKoinApplication *)modulesModules__:(SharedModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKoinApplication *)printLoggerLevel:(SharedLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(SharedModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) SharedKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinApplication.Companion")))
@interface SharedKoinApplicationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (SharedKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("KoinContext")))
@protocol SharedKoinContext
@required
- (SharedKoin *)get __attribute__((swift_name("get()")));
- (SharedKoin * _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (void)loadKoinModulesModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("loadKoinModules(modules:)")));
- (void)loadKoinModulesModule:(SharedModule *)module __attribute__((swift_name("loadKoinModules(module:)")));
- (SharedKoinApplication *)startKoinKoinApplication:(SharedKoinApplication *)koinApplication __attribute__((swift_name("startKoin(koinApplication:)")));
- (SharedKoinApplication *)startKoinAppDeclaration:(void (^)(SharedKoinApplication *))appDeclaration __attribute__((swift_name("startKoin(appDeclaration:)")));
- (void)stopKoin __attribute__((swift_name("stopKoin()")));
- (void)unloadKoinModulesModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("unloadKoinModules(modules:)")));
- (void)unloadKoinModulesModule:(SharedModule *)module __attribute__((swift_name("unloadKoinModules(module:)")));
@end

__attribute__((swift_name("Lockable")))
@interface SharedLockable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Scope")))
@interface SharedScope : SharedLockable
- (instancetype)initWithScopeQualifier:(id<SharedQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(SharedKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (id<SharedQualifier>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedScope *)doCopyScopeQualifier:(id<SharedQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(SharedKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(SharedKotlinArray<SharedScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<SharedScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKotlinArray<SharedScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<SharedParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) SharedLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<SharedQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("ScopeCallback")))
@protocol SharedScopeCallback
@required
- (void)onScopeCloseScope:(SharedScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstanceRegistry")))
@interface SharedInstanceRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(SharedInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) SharedKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, SharedInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyRegistry")))
@interface SharedPropertyRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeRegistry")))
@interface SharedScopeRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<SharedModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) SharedScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<SharedQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeRegistry.Companion")))
@interface SharedScopeRegistryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KoinComponent")))
@protocol SharedKoinComponent
@required
- (SharedKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("KoinScopeComponent")))
@protocol SharedKoinScopeComponent <SharedKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) SharedScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Module")))
@interface SharedModule : SharedBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(SharedKotlinArray<SharedModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<SharedModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<SharedModule *> *)plusModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedModule *> *)plusModule:(SharedModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<SharedQualifier>)qualifier scopeSet:(void (^)(SharedScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(SharedScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleQualifier:(id<SharedQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) SharedMutableSet<SharedSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end

__attribute__((swift_name("Qualifier")))
@protocol SharedQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringQualifier")))
@interface SharedStringQualifier : SharedBase <SharedQualifier>
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedStringQualifier *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypeQualifier")))
@interface SharedTypeQualifier : SharedBase <SharedQualifier>
- (instancetype)initWithType:(id<SharedKotlinKClass>)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrokenDefinitionException")))
@interface SharedBrokenDefinitionException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedScopeException")))
@interface SharedClosedScopeException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefinitionOverrideException")))
@interface SharedDefinitionOverrideException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefinitionParameterException")))
@interface SharedDefinitionParameterException : SharedKotlinException
- (instancetype)initWithStr:(NSString *)str __attribute__((swift_name("init(str:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstanceCreationException")))
@interface SharedInstanceCreationException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg parent:(SharedKotlinException *)parent __attribute__((swift_name("init(msg:parent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinAppAlreadyStartedException")))
@interface SharedKoinAppAlreadyStartedException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingPropertyException")))
@interface SharedMissingPropertyException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoBeanDefFoundException")))
@interface SharedNoBeanDefFoundException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoParameterFoundException")))
@interface SharedNoParameterFoundException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoPropertyFileFoundException")))
@interface SharedNoPropertyFileFoundException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoScopeDefFoundException")))
@interface SharedNoScopeDefFoundException : SharedKotlinException
- (instancetype)initWithS:(NSString *)s __attribute__((swift_name("init(s:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeAlreadyCreatedException")))
@interface SharedScopeAlreadyCreatedException : SharedKotlinException
- (instancetype)initWithS:(NSString *)s __attribute__((swift_name("init(s:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeNotCreatedException")))
@interface SharedScopeNotCreatedException : SharedKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BeanDefinition")))
@interface SharedBeanDefinition<T> : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedScope *, SharedParametersHolder *))definition kind:(SharedKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<SharedQualifier>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<SharedKotlinKClass>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<SharedQualifier> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable (^)(SharedScope *, SharedParametersHolder *))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedKind *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<id<SharedKotlinKClass>> *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedBeanDefinition<T> *)doCopyScopeQualifier:(id<SharedQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedScope *, SharedParametersHolder *))definition kind:(SharedKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedQualifier> _Nullable)qualifier scopeDefinition:(id<SharedQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedScope *, SharedParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) SharedKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<SharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<SharedQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<SharedQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<SharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Callbacks")))
@interface SharedCallbacks<T> : SharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kind")))
@interface SharedKind : SharedKotlinEnum<SharedKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) SharedKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) SharedKind *scoped __attribute__((swift_name("scoped")));
+ (SharedKotlinArray<SharedKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("InstanceFactory")))
@interface SharedInstanceFactory<T> : SharedLockable
- (instancetype)initWithBeanDefinition:(SharedBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(SharedInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) SharedBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryInstanceFactory")))
@interface SharedFactoryInstanceFactory<T> : SharedInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (void)dropScope:(SharedScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstanceContext")))
@interface SharedInstanceContext : SharedBase
- (instancetype)initWithKoin:(SharedKoin *)koin scope:(SharedScope *)scope parameters:(SharedParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedKoin *koin __attribute__((swift_name("koin")));
@property (readonly) SharedParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) SharedScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstanceFactoryCompanion")))
@interface SharedInstanceFactoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopedInstanceFactory")))
@interface SharedScopedInstanceFactory<T> : SharedInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
- (void)refreshInstanceScopeID:(NSString *)scopeID instance:(id)instance __attribute__((swift_name("refreshInstance(scopeID:instance:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleInstanceFactory")))
@interface SharedSingleInstanceFactory<T> : SharedInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((swift_name("Logger")))
@interface SharedLogger : SharedBase
- (instancetype)initWithLevel:(SharedLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(SharedLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(SharedLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property SharedLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyLogger")))
@interface SharedEmptyLogger : SharedLogger
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithLevel:(SharedLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)logLevel:(SharedLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Level")))
@interface SharedLevel : SharedKotlinEnum<SharedLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedLevel *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrintLogger")))
@interface SharedPrintLogger : SharedLogger
- (instancetype)initWithLevel:(SharedLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)logLevel:(SharedLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@end

__attribute__((swift_name("ParametersHolder")))
@interface SharedParametersHolder : SharedBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (SharedParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (SharedParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParametersHolder.Companion")))
@interface SharedParametersHolderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinPlatformTimeTools")))
@interface SharedKoinPlatformTimeTools : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koinPlatformTimeTools __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoinPlatformTimeTools *shared __attribute__((swift_name("shared")));
- (int64_t)getTimeInNanoSeconds __attribute__((swift_name("getTimeInNanoSeconds()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinPlatformTools")))
@interface SharedKoinPlatformTools : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koinPlatformTools __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoinPlatformTools *shared __attribute__((swift_name("shared")));
- (id<SharedKoinContext>)defaultContext __attribute__((swift_name("defaultContext()")));
- (SharedKotlinLazyThreadSafetyMode *)defaultLazyMode __attribute__((swift_name("defaultLazyMode()")));
- (SharedLogger *)defaultLoggerLevel:(SharedLevel *)level __attribute__((swift_name("defaultLogger(level:)")));
- (NSString *)generateId __attribute__((swift_name("generateId()")));
- (NSString *)getClassNameKClass:(id<SharedKotlinKClass>)kClass __attribute__((swift_name("getClassName(kClass:)")));
- (NSString *)getStackTraceE:(SharedKotlinException *)e __attribute__((swift_name("getStackTrace(e:)")));
- (SharedMutableDictionary<id, id> *)safeHashMap __attribute__((swift_name("safeHashMap()")));
- (id _Nullable)synchronizedLock:(SharedLockable *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainThreadValue")))
@interface SharedMainThreadValue<T> : SharedBase
- (instancetype)initWithStartVal:(T)startVal __attribute__((swift_name("init(startVal:)"))) __attribute__((objc_designated_initializer));
- (T)get __attribute__((swift_name("get()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeDSL")))
@interface SharedScopeDSL : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedQualifier>)scopeQualifier module:(SharedModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) SharedModule *module __attribute__((swift_name("module")));
@property (readonly) id<SharedQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModels")))
@interface SharedViewModels : SharedBase <SharedKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) SharedDiagramViewModel *diagramViewModel __attribute__((swift_name("diagramViewModel")));
@property (readonly) SharedMainViewModel *mainViewModel __attribute__((swift_name("mainViewModel")));
@property (readonly) SharedSettingsViewModel *settingsViewModel __attribute__((swift_name("settingsViewModel")));
@end

@interface SharedLGeneral (Extensions)
- (NSString *)close __attribute__((swift_name("close()")));
- (NSString *)diagramScreen __attribute__((swift_name("diagramScreen()")));
- (NSString *)goToBack __attribute__((swift_name("goToBack()")));
- (NSString *)goToDiagram __attribute__((swift_name("goToDiagram()")));
- (NSString *)goToSetting __attribute__((swift_name("goToSetting()")));
- (NSString *)mainScreen __attribute__((swift_name("mainScreen()")));
- (NSString *)save __attribute__((swift_name("save()")));
- (NSString *)settingsScreen __attribute__((swift_name("settingsScreen()")));
- (NSString *)textSize __attribute__((swift_name("textSize()")));
@end

@interface SharedBeanDefinition (Extensions)
- (void)bind __attribute__((swift_name("bind()")));
- (void)bindsClasses:(NSArray<id<SharedKotlinKClass>> *)classes __attribute__((swift_name("binds(classes:)")));
- (void)createdAtStart __attribute__((swift_name("createdAtStart()")));
- (void)named __attribute__((swift_name("named()")));
- (void)namedName:(NSString *)name __attribute__((swift_name("named(name:)")));
- (void)onCloseOnClose:(void (^)(id _Nullable))onClose __attribute__((swift_name("onClose(onClose:)")));
@end

@interface SharedModule (Extensions)
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(void))constructor __attribute__((swift_name("factoryOf(constructor:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(void))constructor options:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor_:(id _Nullable (^)(id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable))constructor options_:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor__:(id _Nullable (^)(id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor__:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable))constructor options__:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options__:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor___:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor___:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor options___:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options___:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options____:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor_____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor_____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_____:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options_____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options______:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor_______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor_______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_______:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options_______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor_________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor_________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options_________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor__________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("factoryOf(constructor__________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)factoryOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options__________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("factoryOf(constructor:options__________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)setupInstanceFactory:(SharedInstanceFactory<id> *)factory options:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("setupInstance(factory:options:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(void))constructor __attribute__((swift_name("singleOf(constructor:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(void))constructor options:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor_:(id _Nullable (^)(id _Nullable))constructor __attribute__((swift_name("singleOf(constructor_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable))constructor options_:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor__:(id _Nullable (^)(id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor__:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable))constructor options__:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options__:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor___:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor___:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor options___:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options___:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options____:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor_____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor_____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_____:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options_____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options______:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor_______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor_______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_______:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options_______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor_________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor_________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options_________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor__________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("singleOf(constructor__________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)singleOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options__________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("singleOf(constructor:options__________:)")));
@end

@interface SharedScope (Extensions)
- (id _Nullable)doNewConstructor:(id _Nullable (^)(void))constructor __attribute__((swift_name("doNew(constructor:)")));
- (id _Nullable)doNewConstructor_:(id _Nullable (^)(id _Nullable))constructor __attribute__((swift_name("doNew(constructor_:)")));
- (id _Nullable)doNewConstructor__:(id _Nullable (^)(id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor__:)")));
- (id _Nullable)doNewConstructor___:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor___:)")));
- (id _Nullable)doNewConstructor____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor____:)")));
- (id _Nullable)doNewConstructor_____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor_____:)")));
- (id _Nullable)doNewConstructor______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor______:)")));
- (id _Nullable)doNewConstructor_______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor_______:)")));
- (id _Nullable)doNewConstructor________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor________:)")));
- (id _Nullable)doNewConstructor_________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor_________:)")));
- (id _Nullable)doNewConstructor__________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("doNew(constructor__________:)")));
@end

@interface SharedScopeDSL (Extensions)
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(void))constructor __attribute__((swift_name("scopedOf(constructor:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(void))constructor options:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor_:(id _Nullable (^)(id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable))constructor options_:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options_:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor__:(id _Nullable (^)(id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor__:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable))constructor options__:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options__:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor___:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor___:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable))constructor options___:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options___:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options____:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor_____:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor_____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_____:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options_____:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options______:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor_______:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor_______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_______:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options_______:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor_________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor_________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options_________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options_________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor__________:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor __attribute__((swift_name("scopedOf(constructor__________:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)scopedOfConstructor:(id _Nullable (^)(id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable, id _Nullable))constructor options__________:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("scopedOf(constructor:options__________:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

@interface SharedKotlinPair (Extensions)
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)withOptionsOptions:(void (^)(SharedBeanDefinition<id> *))options __attribute__((swift_name("withOptions(options:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)bind __attribute__((swift_name("bind()")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)bindClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("bind(clazz:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)bindsClasses:(SharedKotlinArray<id<SharedKotlinKClass>> *)classes __attribute__((swift_name("binds(classes:)")));
- (SharedKotlinPair<SharedModule *, SharedInstanceFactory<id> *> *)onCloseOnClose:(void (^)(id _Nullable))onClose __attribute__((swift_name("onClose(onClose:)")));
@end

@interface SharedKotlinEnum (Extensions)
@property (readonly) id<SharedQualifier> qualifier __attribute__((swift_name("qualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureMainModuleKt")))
@interface SharedFeatureMainModuleKt : SharedBase
@property (class, readonly) SharedModule *featureMainModule __attribute__((swift_name("featureMainModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMResourcesLocalizationKt")))
@interface SharedKMMResourcesLocalizationKt : SharedBase
@property (class) NSBundle *localizationBundle __attribute__((swift_name("localizationBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultContextExtKt")))
@interface SharedDefaultContextExtKt : SharedBase
+ (void)loadKoinModulesModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("loadKoinModules(modules:)")));
+ (void)loadKoinModulesModule:(SharedModule *)module __attribute__((swift_name("loadKoinModules(module:)")));
+ (SharedKoinApplication *)startKoinKoinApplication:(SharedKoinApplication *)koinApplication __attribute__((swift_name("startKoin(koinApplication:)")));
+ (SharedKoinApplication *)startKoinAppDeclaration:(void (^)(SharedKoinApplication *))appDeclaration __attribute__((swift_name("startKoin(appDeclaration:)")));
+ (void)stopKoin __attribute__((swift_name("stopKoin()")));
+ (void)unloadKoinModulesModules:(NSArray<SharedModule *> *)modules __attribute__((swift_name("unloadKoinModules(modules:)")));
+ (void)unloadKoinModulesModule:(SharedModule *)module __attribute__((swift_name("unloadKoinModules(module:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinScopeComponentKt")))
@interface SharedKoinScopeComponentKt : SharedBase
+ (SharedScope *)createScope:(id<SharedKoinScopeComponent>)receiver source:(id _Nullable)source __attribute__((swift_name("createScope(_:source:)")));
+ (id<SharedKotlinLazy>)getOrCreateScope:(id<SharedKoinScopeComponent>)receiver __attribute__((swift_name("getOrCreateScope(_:)")));
+ (NSString *)getScopeId:(id)receiver __attribute__((swift_name("getScopeId(_:)")));
+ (SharedTypeQualifier *)getScopeName:(id)receiver __attribute__((swift_name("getScopeName(_:)")));
+ (SharedScope * _Nullable)getScopeOrNull:(id<SharedKoinScopeComponent>)receiver __attribute__((swift_name("getScopeOrNull(_:)")));
+ (id<SharedKotlinLazy>)doNewScope:(id<SharedKoinScopeComponent>)receiver __attribute__((swift_name("doNewScope(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinComponentKt")))
@interface SharedKoinComponentKt : SharedBase
+ (id)get:(id<SharedKoinComponent>)receiver qualifier:(id<SharedQualifier> _Nullable)qualifier parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(_:qualifier:parameters:)")));
+ (id<SharedKotlinLazy>)inject:(id<SharedKoinComponent>)receiver qualifier:(id<SharedQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(_:qualifier:mode:parameters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleKt")))
@interface SharedModuleKt : SharedBase
+ (SharedFactoryInstanceFactory<id> *)_factoryInstanceFactoryQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition scopeQualifier:(id<SharedQualifier>)scopeQualifier __attribute__((swift_name("_factoryInstanceFactory(qualifier:definition:scopeQualifier:)")));
+ (SharedScopedInstanceFactory<id> *)_scopedInstanceFactoryQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition scopeQualifier:(id<SharedQualifier>)scopeQualifier __attribute__((swift_name("_scopedInstanceFactory(qualifier:definition:scopeQualifier:)")));
+ (SharedSingleInstanceFactory<id> *)_singleInstanceFactoryQualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition scopeQualifier:(id<SharedQualifier>)scopeQualifier __attribute__((swift_name("_singleInstanceFactory(qualifier:definition:scopeQualifier:)")));
+ (NSArray<SharedModule *> *)plus:(NSArray<SharedModule *> *)receiver module:(SharedModule *)module __attribute__((swift_name("plus(_:module:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QualifierKt")))
@interface SharedQualifierKt : SharedBase
+ (SharedTypeQualifier *)_q __attribute__((swift_name("_q()")));
+ (SharedStringQualifier *)_qName:(NSString *)name __attribute__((swift_name("_q(name:)")));
+ (SharedTypeQualifier *)named __attribute__((swift_name("named()")));
+ (id<SharedQualifier>)namedEnum:(SharedKotlinEnum<SharedKotlinEnum *> *)enum_ __attribute__((swift_name("named(enum:)")));
+ (SharedStringQualifier *)namedName:(NSString *)name __attribute__((swift_name("named(name:)")));
+ (SharedTypeQualifier *)qualifier __attribute__((swift_name("qualifier()")));
+ (id<SharedQualifier>)qualifierEnum:(SharedKotlinEnum<SharedKotlinEnum *> *)enum_ __attribute__((swift_name("qualifier(enum:)")));
+ (SharedStringQualifier *)qualifierName:(NSString *)name __attribute__((swift_name("qualifier(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeasureKt")))
@interface SharedMeasureKt : SharedBase
+ (double)measureDurationCode:(void (^)(void))code __attribute__((swift_name("measureDuration(code:)")));
+ (SharedKotlinPair<id, SharedDouble *> *)measureDurationForResultCode:(id _Nullable (^)(void))code __attribute__((swift_name("measureDurationForResult(code:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BeanDefinitionKt")))
@interface SharedBeanDefinitionKt : SharedBase
+ (SharedBeanDefinition<id> *)_createDefinitionKind:(SharedKind *)kind qualifier:(id<SharedQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedScope *, SharedParametersHolder *))definition secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes scopeQualifier:(id<SharedQualifier>)scopeQualifier __attribute__((swift_name("_createDefinition(kind:qualifier:definition:secondaryTypes:scopeQualifier:)")));
+ (NSString *)indexKeyClazz:(id<SharedKotlinKClass>)clazz typeQualifier:(id<SharedQualifier> _Nullable)typeQualifier scopeQualifier:(id<SharedQualifier>)scopeQualifier __attribute__((swift_name("indexKey(clazz:typeQualifier:scopeQualifier:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKt")))
@interface SharedLoggerKt : SharedBase
@property (class, readonly) NSString *KOIN_TAG __attribute__((swift_name("KOIN_TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParametersHolderKt")))
@interface SharedParametersHolderKt : SharedBase
+ (SharedParametersHolder *)emptyParametersHolder __attribute__((swift_name("emptyParametersHolder()")));
+ (SharedParametersHolder *)parametersOfParameters:(SharedKotlinArray<id> *)parameters __attribute__((swift_name("parametersOf(parameters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainThreadSafetyKt")))
@interface SharedMainThreadSafetyKt : SharedBase
@property (class, readonly) BOOL isMainThread __attribute__((swift_name("isMainThread")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinApplicationKt")))
@interface SharedKoinApplicationKt : SharedBase
+ (SharedKoinApplication *)koinApplicationAppDeclaration:(void (^ _Nullable)(SharedKoinApplication *))appDeclaration __attribute__((swift_name("koinApplication(appDeclaration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleDSLKt")))
@interface SharedModuleDSLKt : SharedBase
+ (SharedModule *)moduleCreatedAtStart:(BOOL)createdAtStart override:(BOOL)override moduleDeclaration:(void (^)(SharedModule *))moduleDeclaration __attribute__((swift_name("module(createdAtStart:override:moduleDeclaration:)"))) __attribute__((deprecated("'override' parameter is not used anymore. See 'allowOverride' in KoinApplication")));
+ (SharedModule *)moduleCreatedAtStart:(BOOL)createdAtStart moduleDeclaration:(void (^)(SharedModule *))moduleDeclaration __attribute__((swift_name("module(createdAtStart:moduleDeclaration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtKt")))
@interface SharedStringExtKt : SharedBase
+ (NSString *)clearQuotes:(NSString *)receiver __attribute__((swift_name("clearQuotes(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KClassExtKt")))
@interface SharedKClassExtKt : SharedBase
+ (NSString *)getFullName:(id<SharedKotlinKClass>)receiver __attribute__((swift_name("getFullName(_:)")));
+ (NSString *)saveCache:(id<SharedKotlinKClass>)receiver __attribute__((swift_name("saveCache(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InjectPropertyKt")))
@interface SharedInjectPropertyKt : SharedBase
+ (void)inject:(id _Nullable (^)(void))receiver __attribute__((swift_name("inject(_:)")));
+ (void)inject:(id _Nullable (^)(void))receiver koin:(SharedKoin *)koin __attribute__((swift_name("inject(_:koin:)")));
+ (void)inject:(id _Nullable (^)(void))receiver scope:(SharedScope *)scope __attribute__((swift_name("inject(_:scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppModuleKt")))
@interface SharedAppModuleKt : SharedBase
@property (class, readonly) NSArray<SharedModule *> *appModule __attribute__((swift_name("appModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinHelperKt")))
@interface SharedKoinHelperKt : SharedBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@end

__attribute__((swift_name("Orbit_coreContainer")))
@protocol SharedOrbit_coreContainer
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)inlineOrbitOrbitIntent:(id<SharedKotlinSuspendFunction1>)orbitIntent completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("inlineOrbit(orbitIntent:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)orbitOrbitIntent:(id<SharedKotlinSuspendFunction1>)orbitIntent completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("orbit(orbitIntent:completionHandler:)")));
@property (readonly) SharedOrbit_coreRealSettings *settings __attribute__((swift_name("settings")));
@property (readonly) id<SharedKotlinx_coroutines_coreFlow> sideEffectFlow __attribute__((swift_name("sideEffectFlow")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> stateFlow __attribute__((swift_name("stateFlow")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol SharedMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (SharedBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (SharedDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (SharedFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (SharedInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (SharedLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly, getter=size_) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface SharedKotlinLazyThreadSafetyMode : SharedKotlinEnum<SharedKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Orbit_coreRealSettings")))
@interface SharedOrbit_coreRealSettings : SharedBase
- (instancetype)initWithSideEffectBufferSize:(int32_t)sideEffectBufferSize idlingRegistry:(id<SharedOrbit_coreIdlingResource>)idlingRegistry eventLoopDispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)eventLoopDispatcher intentLaunchingDispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)intentLaunchingDispatcher exceptionHandler:(id<SharedKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable)exceptionHandler repeatOnSubscribedStopTimeout:(int64_t)repeatOnSubscribedStopTimeout __attribute__((swift_name("init(sideEffectBufferSize:idlingRegistry:eventLoopDispatcher:intentLaunchingDispatcher:exceptionHandler:repeatOnSubscribedStopTimeout:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<SharedOrbit_coreIdlingResource>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<SharedKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedOrbit_coreRealSettings *)doCopySideEffectBufferSize:(int32_t)sideEffectBufferSize idlingRegistry:(id<SharedOrbit_coreIdlingResource>)idlingRegistry eventLoopDispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)eventLoopDispatcher intentLaunchingDispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)intentLaunchingDispatcher exceptionHandler:(id<SharedKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable)exceptionHandler repeatOnSubscribedStopTimeout:(int64_t)repeatOnSubscribedStopTimeout __attribute__((swift_name("doCopy(sideEffectBufferSize:idlingRegistry:eventLoopDispatcher:intentLaunchingDispatcher:exceptionHandler:repeatOnSubscribedStopTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *eventLoopDispatcher __attribute__((swift_name("eventLoopDispatcher")));
@property (readonly) id<SharedKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable exceptionHandler __attribute__((swift_name("exceptionHandler")));
@property (readonly) id<SharedOrbit_coreIdlingResource> idlingRegistry __attribute__((swift_name("idlingRegistry")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *intentLaunchingDispatcher __attribute__((swift_name("intentLaunchingDispatcher")));
@property (readonly) int64_t repeatOnSubscribedStopTimeout __attribute__((swift_name("repeatOnSubscribedStopTimeout")));
@property (readonly) int32_t sideEffectBufferSize __attribute__((swift_name("sideEffectBufferSize")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Orbit_coreIdlingResource")))
@protocol SharedOrbit_coreIdlingResource
@required
- (void)close __attribute__((swift_name("close()")));
- (void)decrement __attribute__((swift_name("decrement()")));
- (void)increment __attribute__((swift_name("increment()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineExceptionHandler")))
@protocol SharedKotlinx_coroutines_coreCoroutineExceptionHandler <SharedKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<SharedKotlinCoroutineContext>)context exception:(SharedKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
