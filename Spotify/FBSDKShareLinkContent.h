//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharingContent.h"

@class FBSDKHashtag, NSArray, NSDictionary, NSString, NSURL;

@interface FBSDKShareLinkContent : NSObject <FBSDKSharingContent>
{
    NSURL *_contentURL;
    FBSDKHashtag *_hashtag;
    NSArray *_peopleIDs;
    NSString *_placeID;
    NSString *_ref;
    NSString *_pageID;
    NSDictionary *_feedParameters;
    NSString *_quote;
    NSString *_shareUUID;
    NSString *_contentDescription;
    NSString *_contentTitle;
    NSURL *_imageURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(readonly, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(readonly, copy, nonatomic) NSString *shareUUID; // @synthesize shareUUID=_shareUUID;
@property(copy, nonatomic) NSString *quote; // @synthesize quote=_quote;
@property(copy, nonatomic) NSDictionary *feedParameters; // @synthesize feedParameters=_feedParameters;
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
- (_Bool)isEqualToShareLinkContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

