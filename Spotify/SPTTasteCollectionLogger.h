//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTTasteCollectionLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
}

@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logImpressionForComponent:(id)arg1 impressionType:(id)arg2;
- (void)logInteractionForComponent:(id)arg1 viewURI:(id)arg2 interactionType:(id)arg3;
- (void)logInteractionForComponentAtIndex:(long long)arg1 interactionId:(id)arg2 viewURI:(id)arg3 interactionType:(id)arg4;
- (void)logImpressionForComponentAtIndex:(long long)arg1 impressionItemId:(id)arg2 viewURI:(id)arg3 impressionType:(id)arg4;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2;

@end

