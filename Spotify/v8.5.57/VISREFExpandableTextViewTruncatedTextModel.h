//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface VISREFExpandableTextViewTruncatedTextModel : NSObject
{
    NSAttributedString *_text;
    struct _NSRange _truncationTextRange;
}

@property(nonatomic) struct _NSRange truncationTextRange; // @synthesize truncationTextRange=_truncationTextRange;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

