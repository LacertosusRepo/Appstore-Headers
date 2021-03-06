//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SPTFormatListContextMenuController : NSObject
{
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void).cxx_destruct;
- (void)presentContextMenuFromSenderView:(id)arg1 formatListItemModel:(id)arg2 formatListModel:(id)arg3;
- (id)createDefaultAccessoryButtonWithTarget:(id)arg1 selector:(SEL)arg2 indexPath:(id)arg3;
- (id)initWithContextMenuFeature:(id)arg1 URL:(id)arg2;

@end

