<?php

/**
 * @file
 * Create admin-related functionality.
 */

/**
 * Menu callback; display the admin config form.
 */
function commerce_qbo_admin_config() {
  return drupal_get_form('commerce_qbo_admin_config_form');
}

/**
 * Create the admin config form.
 *
 * This display the "Connect to QuickBooks" button.
 */
function commerce_qbo_admin_config_form($form, &$form_state) {
  global $base_url;

  $form['connect'] = array(
    '#markup' => '
      <script src="https://js.appcenter.intuit.com/Content/IA/intuit.ipp.anywhere.js" type="text/javascript"></script>
      <script type="text/javascript">
        intuit.ipp.anywhere.setup({
          menuProxy: "' . $base_url . '/admin/commerce/config/qbo/menu_proxy",
          grantUrl: "' . $base_url . '/admin/commerce/config/qbo/connect"
        });
      </script>
      <ipp:connectToIntuit></ipp:connectToIntuit>
    ',
  );

  return $form;
}

/**
 * Menu callback; begin connecting to QuickBooks Online via OAuth.
 */
function commerce_qbo_connect() {
  return 'test';
}
