//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTIAPSpotifyProductRequestDelegate;

@interface SPTIAPSpotifyProductRequest : NSObject
{
    id <SPTIAPSpotifyProductRequestDelegate> _delegate;
}

+ (id)productRequestWithDataLoaderFactory:(id)arg1;
+ (id)productRequestWithHermesController:(id)arg1;
@property(nonatomic) __weak id <SPTIAPSpotifyProductRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)productIdentifiersFromResponseData:(id)arg1 error:(id *)arg2;
- (void)start;

@end

