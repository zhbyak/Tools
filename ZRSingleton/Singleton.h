//定义宏的h方法.
#define singleton_h(name) +(instancetype)shared##name;



/**
 条件编译 要放在宏定义的前面
 */
#if __has_feature(objc_arc)


//定义宏的m方法,但是init方法要自己写.
//这里是ARC下的单例宏
#define singleton_m(name) \
\
static id _instance = nil;\
+(instancetype)shared##name{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [[self alloc] init];\
    });\
    return _instance;\
}\
+(instancetype)allocWithZone:(struct _NSZone *)zone{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
    return _instance;\
}\

/**
 *  条件编译
 */
#else

//这里是MRC下的单例宏
#define singleton_m(name) \
\
+(instancetype)shared##name{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [[self alloc] init];\
});\
return _instance;\
}\
+(instancetype)allocWithZone:(struct _NSZone *)zone{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [super allocWithZone:zone];\
});\
return _instance;\
}\
-(oneway void)release{\
}\
-(instancetype)autorelease{\
return self;\
}\
-(instancetype)retain{\
return self;\
}\
-(NSUInteger)retainCount{\
return 1;\
}\
\
+(id)copyWithZone:(struct _NSZone *)zone{\
\
return _instance;\
}

/**
 *  结束条件编译
 */
#endif
