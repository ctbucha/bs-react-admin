/*
 [@bs.module "react-admin"] external authLogin : string = "AUTH_LOGIN";
 [@bs.module "react-admin"] external authCheck : string = "AUTH_CHECK";
 [@bs.module "react-admin"] external authError : string = "AUTH_ERROR";
 [@bs.module "react-admin"] external authLogout : string = "AUTH_LOGOUT";
 [@bs.module "react-admin"]
 external authGetPermissions : string = "AUTH_GET_PERMISSIONS";
 */

[@bs.deriving jsConverter]
type actionType = [
  | [@bs.as "AUTH_LOGIN"] `AuthLogin
  | [@bs.as "AUTH_CHECK"] `AuthCheck
  | [@bs.as "AUTH_ERROR"] `AuthError
  | [@bs.as "AUTH_LOGOUT"] `AuthLogout
  | [@bs.as "AUTH_GET_PERMISSIONS"] `AuthGetPermissions
];
