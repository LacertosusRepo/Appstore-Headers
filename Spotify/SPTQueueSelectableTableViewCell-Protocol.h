//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol SPTQueueSelectableTableViewCell <NSObject>
@property(retain, nonatomic) UIImage *placeholderImage;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic, getter=isDragging) _Bool dragging;
@property(nonatomic, getter=isSeparatorLineHidden) _Bool separatorLineHidden;
@property(nonatomic, getter=isSelectorHidden) _Bool selectorHidden;
@property(nonatomic, getter=isTrackSelected) _Bool trackSelected;
@property(nonatomic) __weak id <SPTQueueTableViewCellDelegate> delegate;
@property(retain, nonatomic) id <SPTQueueTrack> track;
@end

