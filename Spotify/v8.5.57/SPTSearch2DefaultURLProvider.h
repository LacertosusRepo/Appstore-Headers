//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearch2URLProviding-Protocol.h"

@class NSString, SPTSearch2RequestParametersProvider;
@protocol SPTSearch2URLProviding;

@interface SPTSearch2DefaultURLProvider : NSObject <SPTSearch2URLProviding>
{
    SPTSearch2RequestParametersProvider *_parametersProvider;
    NSString *_entityType;
    unsigned long long _offset;
    unsigned long long _limit;
}

@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) SPTSearch2RequestParametersProvider *parametersProvider; // @synthesize parametersProvider=_parametersProvider;
- (void).cxx_destruct;
- (_Bool)isDrillDown;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> nextPageURLProvider;
@property(readonly, nonatomic) unsigned long long responseFormat;
- (id)urlForQuery:(id)arg1;
- (id)initWithParametersProvider:(id)arg1 entityType:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)initWithParametersProvider:(id)arg1 entityType:(id)arg2 limit:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

