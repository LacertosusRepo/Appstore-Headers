//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingContent-Protocol.h"

@class FBSDKHashtag, NSArray, NSString, NSURL;
@protocol FBSDKShareMessengerActionButton;

@interface FBSDKShareMessengerOpenGraphMusicTemplateContent : NSObject <FBSDKSharingContent>
{
    NSURL *_contentURL;
    FBSDKHashtag *_hashtag;
    NSArray *_peopleIDs;
    NSString *_placeID;
    NSString *_ref;
    NSString *_pageID;
    NSString *_shareUUID;
    NSURL *_url;
    id <FBSDKShareMessengerActionButton> _button;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) id <FBSDKShareMessengerActionButton> button; // @synthesize button=_button;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *shareUUID; // @synthesize shareUUID=_shareUUID;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

