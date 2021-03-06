//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface FBSDKSwizzle : NSObject
{
    unsigned int _numArgs;
    Class _class;
    SEL _selector;
    CDUnknownFunctionPointerType _originalMethod;
    NSMapTable *_blocks;
}

@property(copy, nonatomic) NSMapTable *blocks; // @synthesize blocks=_blocks;
@property(nonatomic) unsigned int numArgs; // @synthesize numArgs=_numArgs;
@property(nonatomic) CDUnknownFunctionPointerType originalMethod; // @synthesize originalMethod=_originalMethod;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) Class class; // @synthesize class=_class;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 named:(id)arg2 forClass:(Class)arg3 selector:(SEL)arg4 originalMethod:(CDUnknownFunctionPointerType)arg5 withNumArgs:(unsigned int)arg6;
- (id)init;

@end

