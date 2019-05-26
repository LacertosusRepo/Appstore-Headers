//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierArtistImage-Protocol.h"

@class NSString, NSURL;

@interface SPTFreeTierArtistImageModel : NSObject <SPTFreeTierArtistImage>
{
    NSURL *_URL;
}

+ (id)imagesWithArrayOfURIs:(id)arg1;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (_Bool)isPreviewable;
- (id)imageURL;
- (id)initWithURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
