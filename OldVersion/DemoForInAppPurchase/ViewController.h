//
//  ViewController.h
//  DemoForInAppPurchase
//
//  Created by DarkLinden on 9/18/12.
//  Copyright (c) 2012 DarkLinden. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "C_IapPurchaseController.h"
#import "VC_selectProduct.h"

@interface ViewController : UIViewController <UIAlertViewDelegate, C_IapPurchaseControllerDelegate, VC_selectProductDelegate>
@end
