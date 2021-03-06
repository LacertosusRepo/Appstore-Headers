//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTRequest;

@interface SPTPodcastRequest : NSObject
{
    SPTRequest *_request;
    id <SPTPodcastRequestData> _requestData;
}

@property(retain, nonatomic) id <SPTPodcastRequestData> requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) SPTRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)addFilterPredicate:(id)arg1 forRequestString:(id)arg2 appendFilter:(_Bool)arg3;
- (id)convertFilterPredicate:(id)arg1;
- (void)addSortDescriptors:(id)arg1 forRequestString:(id)arg2;
- (id)convertSortOrder:(id)arg1;
- (void)replaceParameter:(id)arg1 withString:(id)arg2 inRequestString:(id)arg3;
- (void)setupRequest;
- (id)initWithRequestData:(id)arg1;

@end

