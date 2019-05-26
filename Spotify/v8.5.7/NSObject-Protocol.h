//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, Protocol;

@protocol NSObject
@property(nonatomic, readonly) NSString *description;
- (void *)zone;
- (long long)retainCount;
- (id)autorelease;
- (void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id *)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;

@optional
@property(nonatomic, readonly) NSString *debugDescription;
@end

