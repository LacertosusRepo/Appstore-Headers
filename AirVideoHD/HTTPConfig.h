//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HTTPServer, NSString;
@protocol OS_dispatch_queue;

@interface HTTPConfig : NSObject
{
    HTTPServer *server;
    NSString *documentRoot;
    NSObject<OS_dispatch_queue> *queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
@property(readonly, nonatomic) NSString *documentRoot; // @synthesize documentRoot;
@property(readonly, nonatomic) HTTPServer *server; // @synthesize server;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServer:(id)arg1 documentRoot:(id)arg2 queue:(id)arg3;
- (id)initWithServer:(id)arg1 documentRoot:(id)arg2;

@end

