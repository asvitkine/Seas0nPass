/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVerticalScrollBarControl : BRControl {
@private
	BRImageControl *_image;	// 40 = 0x28
	float _position;	// 44 = 0x2c
}
@property(retain) BRImageControl *image;	// G=0x315f3839; S=0x315f3859; converted property
- (id)init;	// 0x315f38e5
- (void)dealloc;	// 0x315f389d
// converted property getter: - (id)image;	// 0x315f3839
- (void)layoutSubcontrols;	// 0x315f4021
// converted property setter: - (void)setImage:(id)image;	// 0x315f3859
- (void)setScrollPosition:(float)position;	// 0x315f3879
@end

