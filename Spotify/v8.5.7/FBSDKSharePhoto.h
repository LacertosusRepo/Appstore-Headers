//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL, UIImage;

@interface FBSDKSharePhoto : NSObject <FBSDKCopying, NSSecureCoding>
{
    _Bool _userGenerated;
    UIImage *_image;
    NSURL *_imageURL;
    NSString *_caption;
}

+ (_Bool)supportsSecureCoding;
+ (id)photoWithImageURL:(id)arg1 userGenerated:(_Bool)arg2;
+ (id)photoWithImage:(id)arg1 userGenerated:(_Bool)arg2;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic, getter=isUserGenerated) _Bool userGenerated; // @synthesize userGenerated=_userGenerated;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToSharePhoto:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
